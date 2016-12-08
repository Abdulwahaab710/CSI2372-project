//
//  hand.cpp
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#include "hand.h"

Hand::Hand() {
    
}

Hand& Hand::operator+=(Card* card) {
    d_cards.push_back(card);
    return *this;
}

Card* Hand::play() {
    Card* cardPlayed = d_cards.back();
    d_cards.pop_back();
    return cardPlayed;
}

Card* Hand::top() {
    return d_cards.back();
}

Card* Hand::operator[] (int i) {
    Card* cardToBeRemoved = d_cards.at(i);
    d_cards.erase(d_cards.begin() + i);
    return cardToBeRemoved;
}


void Hand::print(std::ostream& out) {
    for (int i = 0; i < d_cards.size(); ++i) {
        d_cards[i]->print(out);
    }
}
