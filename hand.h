//
//  hand.h
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#ifndef hand_h
#define hand_h

#include "card.h"
#include "cardfactory.h"
#include <vector>

class Hand {
    std::vector<Card*> d_cards;
public:
    
    Hand(std::istream&, CardFactory*);
    
    //adds the card to the rear of the hand
    Hand& operator+=(Card*);
    
    //returns and removes the top card of the player's hand
    Card* play();
    
    //returns but does not remove the top card of the player's hand
    Card* top();
    
    //returns and removes the card at the given index
    Card* operator[](int);
};

#endif /* hand_h */
