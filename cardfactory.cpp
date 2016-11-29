//
//  cardfactory.cpp
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#include "cardfactory.h"
#include "gemstones.h"

//constructor methods that generates all 104 gemstone cards
CardFactory::CardFactory() {
    
    int c = 0;
    
    //create quartz cards
    for (int q = 0; q < quartz; ++q) {
        cards[c] = new Quartz;
        c++;
    }
    
    //create hematite cards
    for (int h = 0; h < hematite; ++h) {
        cards[c] = new Hematite;
        c++;
    }
    
    //create obsidian cards
    for (int o = 0; o < obsidian; ++o) {
        cards[c] = new Obsidian;
        c++;
    }
    
    //create malachite cards
    for (int m = 0; m < malachite; ++m) {
        cards[c] = new Malachite;
        c++;
    }
    
    //create turquoise cards
    for (int t = 0; t < turquoise; ++t) {
        cards[c] = new Turquoise;
        c++;
    }
    
    //create ruby cards
    for (int r = 0; r < ruby; ++r) {
        cards[c] = new Ruby;
        c++;
    }
    
    //create amethyst cards
    for (int a = 0; a < amethyst; ++a) {
        cards[c] = new Amethyst;
        c++;
    }
    
    //create emerald cards
    for (int e = 0; e < emerald; ++e) {
        cards[c] = new Emerald;
        c++;
    }
}

CardFactory* CardFactory::getCardFactory() {
    static CardFactory instance;
    return &instance;
}

CardFactory::~CardFactory() {
    for (int i = 0; i < totalCards; ++i) {
        delete cards[i];
    }
}

void CardFactory::printCards() {
    for (int i = 0; i < totalCards; ++i) {
        std::cout << i << ")" << cards[i]->getName() << std::endl;
    }
}

