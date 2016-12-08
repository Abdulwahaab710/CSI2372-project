//
//  hand.cpp
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#include "hand.h"

Hand::Hand(std::istream &, CardFactory *) {

}


Card *Hand::play() {
    Card *playedCard = d_cards.back();
    d_cards.pop_back();
    return playedCard;
}

Card *Hand::operator[](int) {
    return nullptr;
}

Hand &Hand::operator+=(Card *) {
    return <#initializer#>;
}

Card *Hand::top() {
    return d_cards.back();
}
