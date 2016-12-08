//
//  cardfactory.h
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#ifndef cardfactory_h
#define cardfactory_h

#include <vector>
class Deck;
class Card;

class CardFactory {
private:
    
    static const int
                quartz = 20,
                hematite = 18,
                obsidian = 16,
                malachite = 14,
                turquoise = 12,
                ruby = 10,
                amethyst = 8,
                emerald = 6;
    
    static const int totalCards = quartz + hematite + obsidian + malachite + turquoise + ruby + amethyst + emerald;
    
    std::vector<Card*> cards;
    
    static CardFactory instance;
    
    //Constructor must be private as no other classes are allowed to declare an instance of CardFactory
    CardFactory();
    
public:
    
    //returns a pointer to the only instance of CardFactory
    static CardFactory* getCardFactory() {
        return &instance;
    }
    
    //returns a shuffled deck with all 104 gemstone cards
    Deck getDeck();
    
    //returns a vector containing pointers to the cards created by the CardFactory (not shuffled)
    std::vector<Card*> getCards();
    
    //Destructor is public so that the only instance of CardFactory can be deleted whenever needed
    ~CardFactory();
    
    void printCards();
    
    int getNumCardsByName(char n);
    

    Card generateNewCard(std::string& name);

};

#endif /* cardfactory_h */

