//
//  chain.h
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#ifndef chain_h
#define chain_h

#include <string>
#include <vector>
#include "card.h"
#include "cardfactory.h"
#include <iostream>


class IllegalTypeException: public std::exception{
    virtual const char* what() const throw(){
        return "IllegalTypeException";
    }
};


class Chain_Base{
protected:
    std::string d_gemType;
public:
    Chain_Base(std::string _gemType) : d_gemType(_gemType) {};
    virtual ~Chain_Base() = default;
    virtual int sell() = 0;
    std::string getGemType() {
        return d_gemType;
    }
    virtual void print(std::ostream&) const = 0;
    
    friend std::ostream& operator<<(std::ostream& o, Chain_Base& chain) {
        o << chain.getGemType() << "\t";
        chain.print(o);
        return o;
    };
};

template<class T> class Chain : public Chain_Base {
    std::vector<T*> d_chain;
public:
    Chain(T* t) :
    Chain_Base(t->getName()) {
        d_chain.push_back(t);
    };
    virtual ~Chain() {
        d_chain.erase(d_chain.begin(), d_chain.end());
    }
    
    //adds a card to the chain
    virtual Chain<T>& operator+=(T* gem) {
        try {
        d_chain.push_back(gem);
        }
        catch (IllegalTypeException e) {
            std::cout << "You are not allowed to add" << gem->getName() << " to" << d_chain[0]->getName() << std::endl;
        }
        return *this;
    }
    
    //counts the number cards in the current chain and
    //returns the number of coins according to the function Card::getCoinsPerCard.
    virtual int sell() override {
        int numCards = static_cast<int>(d_chain.size());
        return d_chain[0]->getCoinsPerCard(numCards);
    }
    
    //prints the name of the chain and the nuber of cards the chain contains in the format "Ruby  R R R"
    virtual void print(std::ostream& o) const override{
        for (auto& c : d_chain) {
            c->print(o);
            o << " ";
        }
    }
            
    void setGemType(std::string name) {
        d_gemType = name;
    }
            
    Chain(std::istream& in, CardFactory* cf) : Chain_Base("") {
        std::string buf;
        in >> d_gemType;
        in >> buf;
        while (in.good()) {
            in >> buf;
            if (buf == "~") { break; }
            else {
                *this += cf->generateNewCard(d_gemType);
            }
        }
    }
            
};
            
#endif /* chain_h */
