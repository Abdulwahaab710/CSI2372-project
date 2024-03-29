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

CardFactory* CardFactory::getCardFactory() {
    static CardFactory instance;
    return &instance;
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

Card CardFactory::generateNewCard(string &name) {
    Card card{nullptr};
    char cardLetter = name[0];
    switch(cardLetter) {
        case 'Q':
            Quartz* q = Quartz::Create();
            card = q;
            break;
        case 'H':
            Hematite* h = Hematite::Create();
            card = h;
            break;
        case 'O':
            Obsidian* o = Obsidian::Create();
            card = o;
            break;
        case 'M':
            Malachite* m = Malachite::Create();
            card = m;
            break;
        case 'T':
            Turquoise* t = Turquoise::Create();
            card = t;
            break;
        case 'R':
            Ruby* r = new Ruby();
            card = r;
            break;
        case 'A':
            Amethyst* a = Amethyst::Create();
            card = a;
            break;
        case 'E':
            Emerald* e = Emerald::Create();
            card = e;
            break;
    }
        return card;
}

