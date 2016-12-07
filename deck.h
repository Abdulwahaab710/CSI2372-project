//
//  deck.h
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#ifndef deck_h
#define deck_h

#include <vector>
#include "card.h"
#include "cardfactory.h"
#include <algorithm>
#include <random>
#include <chrono>
#include <iostream>

using std::vector;

class Deck {
    
private:
    
    std::vector<Card*> d_cards;
    
public:
    
    Deck(CardFactory*);
    
    Deck(std::istream&, CardFactory*);
    
    //returns and removes the top card of the deck 
    Card* draw();
    
    //prints the deck to the output stream provided as an argument
    void print(std::ostream&);
    
    //shuffles the deck
    void shuffle();
    
    //returns true if the deck is empty
    bool isEmpty();

};

#endif /* deck_h */
