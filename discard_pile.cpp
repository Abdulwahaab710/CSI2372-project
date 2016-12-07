//
//  discard_pile.cpp
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#include "discard_pile.h"
#include <iostream>

DiscardPile::DiscardPile() {
    
}

DiscardPile& DiscardPile::operator+=(Card* card) {
    d_cards.push_back(card);
    return *this;
}

Card* DiscardPile::pickup() {
    
    Card* topCard = nullptr;
    //check to make sure Discard Pile isn't empty
    if (d_cards.size() != 0) {
        topCard = d_cards.back();
        d_cards.pop_back();
    }
    return topCard;
}

Card* DiscardPile::top() {
    Card* topCard = nullptr;
    
    //check to make sure Discard Pile isn't empty
    if (d_cards.size() != 0) {
        topCard = d_cards.back();
    }
    return topCard;
}

void DiscardPile::print(std::ostream& out) {
    for (int i = 0; i < d_cards.size(); ++i) {
        d_cards[i]->print(out);
    }
}
