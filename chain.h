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
    
    friend std::ostream& operator<<(std::ostream& out, Chain_Base& chain) {
        out << chain.getGemType() << "\t";
        chain.print(out);
        return out;
    };
};

template<class T> class Chain : public Chain_Base {
    std::vector<T*> d_cardsByType;
public:
    
    Chain() {
    }
    
    Chain(T* t) :
    Chain_Base(t->getName()) {
        d_cardsByType->push_back(t);
    };
    virtual ~Chain() {
        std::vector<T*>().swap(d_cardsByType);
        d_cardsByType.shrink_to_fit();
        delete d_cardsByType;
    }
    
    //add a card to the chain
    virtual Chain<T>& operator+=(T* gem) {
        try {
            d_cardsByType.push_back(gem);
        }
        catch (IllegalTypeException e) {
            std::cout << "You arre not allowed to add" << getGemType() << " to" << d_cardsByType.at(0)->getName() << std::endl;
        }
        return *this;
    }
    
    //counts the number cards in the current chain and
    //returns the number of coins according to the function Card::getCoinsPerCard.
    virtual int sell() override {
        int numCards = static_cast<int>(d_cardsByType.size());
        return d_cardsByType.at(0)->getCoinsPerCard(numCards);
    }
    
    //prints the name of the chain and the nuber of cards the chain contains in the format "Ruby  R R R"
    virtual void print(std::ostream& o) const override{
        for (auto& c : d_cardsByType) {
            c.print(o);
            o << " ";
            }
    }
            
    void setGemType(std::string name) {
        d_gemType = name;
    }
};
            
#endif /* chain_h */
