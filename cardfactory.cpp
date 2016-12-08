//
//  cardfactory.cpp
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#include "cardfactory.h"
#include "gemstones.h"
#include "deck.h"

//constructor methods that generates all 104 gemstone cards
CardFactory::CardFactory() {
    
    
    //create quartz cards
    for (int q = 0; q < quartz; ++q) {
        cards.push_back(new Quartz);
    }
    
    //create hematite cards
    for (int h = 0; h < hematite; ++h) {
        cards.push_back(new Hematite);
    }
    
    //create obsidian cards
    for (int o = 0; o < obsidian; ++o) {
        cards.push_back(new Obsidian);
    }
    
    //create malachite cards
    for (int m = 0; m < malachite; ++m) {
        cards.push_back(new Malachite);
    }
    
    //create turquoise cards
    for (int t = 0; t < turquoise; ++t) {
        cards.push_back(new Turquoise);
    }
    
    //create ruby cards
    for (int r = 0; r < ruby; ++r) {
        cards.push_back(new Ruby);
    }
    
    //create amethyst cards
    for (int a = 0; a < amethyst; ++a) {
        cards.push_back(new Amethyst);
    }
    
    //create emerald cards
    for (int e = 0; e < emerald; ++e) {
        cards.push_back(new Emerald);
    }
}

CardFactory::~CardFactory() {
    for (int i = 0; i < totalCards; ++i) {
        delete cards[i];
    }
}

Deck CardFactory::getDeck() {
    Deck d(this);
    return d;
}

std::vector<Card*> CardFactory::getCards() {
    return cards;
}

void CardFactory::printCards() {
    for (int i = 0; i < totalCards; ++i) {
        std::cout << cards[i]->getName() << " ";
    }
}

int CardFactory::getNumCardsByName(char n) {
    switch (n) {
        case 'Q':
            return quartz;
            break;
            
        case 'H':
            return hematite;
            break;
            
        case 'O':
            return obsidian;
            break;
            
        case 'M':
            return malachite;
            break;
            
        case 'T':
            return turquoise;
            break;
            
        case 'R':
            return ruby;
            break;
            
        case 'A':
            return amethyst;
            break;
            
        case 'E':
            return emerald;
            break;
            
        default:
            return 0;
            break;
    }
}

