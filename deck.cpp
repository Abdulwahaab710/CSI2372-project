//
//  deck.cpp
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#include "deck.h"

Deck::Deck(CardFactory* cardFactory) {
    d_cards = cardFactory->getCards();
    shuffle();
}

Deck::Deck(std::istream& in, CardFactory* cardFactory) {}

Card* Deck::draw() {
    Card* topCard = nullptr;
    
    //make sure deck is not empty (to avoid undefined behaviour)
    if (d_cards.size() != 0) {
        topCard = d_cards.back();
        d_cards.pop_back();
    }
    return topCard;
}

void Deck::shuffle() {
    unsigned seed = static_cast<unsigned> (std::chrono::system_clock::now().time_since_epoch().count());
    std::shuffle (d_cards.begin(), d_cards.end(), std::default_random_engine(seed));
}

void Deck::print(std::ostream& out) {
    for (int i = 0; i < d_cards.size(); ++i) {
        d_cards[i]->print(out);
    }
}

bool Deck::isEmpty() {
    if (d_cards.size() == 0) {
        return true;
    }
    else {
        return false; 
    }
}


