//
//  gemstones.cpp
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#include "gemstones.h"
#include "cardfactory.h"


//Quartz -----------------------------------------------

Quartz::Quartz() {
    
    d_name = "Quartz";
    d_numCards = CardFactory::getCardFactory()->getNumCardsByName('Q');
}

int Quartz::getCoinsPerCard(int cards) {
    
    int coins = 0;
    if (cards >= 0 && cards <= d_numCards) {
        if (cards >= 0 && cards < 4) {
            coins = 0;
        }
        else if (cards >= 4 && cards < 6) {
            coins = 1;
        }
        else if (cards >= 6 && cards < 8) {
            coins = 2;
        }
        else if (cards >= 8 && cards < 10) {
            coins = 3;
        }
        else if (cards >= 10) {
            coins = 4;
        }
    }
    return coins;
}

std::string Quartz::getName() {
    return d_name;
}

int Quartz::getNumCards() {
    return d_numCards;
}
        

void Quartz::print(std::ostream& out) {
    out << "Q" << " ";
}

Quartz::~Quartz() {}

//Hematite -----------------------------------------------

Hematite::Hematite() {
    
    d_name = "Hematite";
    d_numCards = CardFactory::getCardFactory()->getNumCardsByName('H');
}

int Hematite::getCoinsPerCard(int cards) {

    int coins = 0;
    if (cards >= 0 && cards <= d_numCards) {
        if (cards >= 0 && cards < 3) {
            coins = 0;
        }
        else if (cards >= 3 && cards < 6) {
            coins = 1;
        }
        else if (cards >= 6 && cards < 8) {
            coins = 2;
        }
        else if (cards >= 8 && cards < 9) {
            coins = 3;
        }
        else if (cards >= 9) {
            coins = 4;
        }
    }
    return coins;
}

std::string Hematite::getName() {
    return d_name;
}

int Hematite::getNumCards() {
    return d_numCards;
}

void Hematite::print(std::ostream& out) {
    out << "H" << " ";
}

Hematite::~Hematite() {}

//Obsidian -----------------------------------------------

Obsidian::Obsidian() {
    
    d_name = "Obsidian";
    d_numCards = CardFactory::getCardFactory()->getNumCardsByName('O');
}

int Obsidian::getCoinsPerCard(int cards) {
    
    int coins = 0;
    if (cards >= 0 && cards <= d_numCards) {
        if (cards >= 0 && cards < 3) {
            coins = 0;
        }
        else if (cards >= 3 && cards < 5) {
            coins = 1;
        }
        else if (cards >= 5 && cards < 7) {
            coins = 2;
        }
        else if (cards >= 7 && cards < 8) {
            coins = 3;
        }
        else if (cards >= 8) {
            coins = 4;
        }
    }
    return coins;
}

std::string Obsidian::getName() {
    return d_name;
}

int Obsidian::getNumCards() {
    return d_numCards;
}

void Obsidian::print(std::ostream& out) {
    out << "O" << " ";
}

Obsidian::~Obsidian() {}

//Malachite -----------------------------------------------

Malachite::Malachite() {
    
    d_name = "Malachite";
    d_numCards = CardFactory::getCardFactory()->getNumCardsByName('M');
}

int Malachite::getCoinsPerCard(int cards) {
    
    int coins = 0;
    if (cards >= 0 && cards <= d_numCards) {
        if (cards >= 0 && cards < 3) {
            coins = 0;
        }
        else if (cards >= 3 && cards < 5) {
            coins = 1;
        }
        else if (cards >= 5 && cards < 6) {
            coins = 2;
        }
        else if (cards >= 6 && cards < 7) {
            coins = 3;
        }
        else if (cards >= 7) {
            coins = 4;
        }
    }
    return coins;
}

std::string Malachite::getName() {
    return d_name;
}

int Malachite::getNumCards() {
    return d_numCards;
}

void Malachite::print(std::ostream& out) {
    out << "M" << " ";
}

Malachite::~Malachite() {}

//Turquoise -----------------------------------------------

Turquoise::Turquoise() {
    
    d_name = "Turquoise";
    d_numCards = CardFactory::getCardFactory()->getNumCardsByName('T');
}

int Turquoise::getCoinsPerCard(int cards) {
    
    int coins = 0;
    if (cards >= 0 && cards <= d_numCards) {
        if (cards >= 0 && cards < 2) {
            coins = 0;
        }
        else if (cards >= 2 && cards < 4) {
            coins = 1;
        }
        else if (cards >= 4 && cards < 6) {
            coins = 2;
        }
        else if (cards >= 6 && cards < 7) {
            coins = 3;
        }
        else if (cards >= 7) {
            coins = 4;
        }
    }
    return coins;
}

std::string Turquoise::getName() {
    return d_name;
}

int Turquoise::getNumCards() {
    return d_numCards;
}

void Turquoise::print(std::ostream& out) {
    out << "T" << " ";
}

Turquoise::~Turquoise() {}

//Ruby -----------------------------------------------

Ruby::Ruby() {
    
    d_name = "Ruby";
    d_numCards = CardFactory::getCardFactory()->getNumCardsByName('R');
}

int Ruby::getCoinsPerCard(int cards) {
    
    int coins = 0;
    if (cards >= 0 && cards <= d_numCards) {
        if (cards >= 0 && cards < 2) {
            coins = 0;
        }
        else if (cards >= 2 && cards < 4) {
            coins = 1;
        }
        else if (cards >= 4 && cards < 5) {
            coins = 2;
        }
        else if (cards >= 5 && cards < 6) {
            coins = 3;
        }
        else if (cards >= 6) {
            coins = 4;
        }
    }
    return coins;
}

std::string Ruby::getName() {
    return d_name;
}

int Ruby::getNumCards() {
    return d_numCards;
}

void Ruby::print(std::ostream& out) {
    out << "R" << " ";
}

Ruby::~Ruby() {}

//Amethyst -----------------------------------------------

Amethyst::Amethyst() {
    
    d_name = "Amethyst";
    d_numCards = CardFactory::getCardFactory()->getNumCardsByName('A');
}

int Amethyst::getCoinsPerCard(int cards) {
    
    int coins = 0;
    if (cards >= 0 && cards <= d_numCards) {
        if (cards >= 0 && cards < 2) {
            coins = 0;
        }
        else if (cards >= 2 && cards < 3) {
            coins = 1;
        }
        else if (cards >= 3 && cards < 4) {
            coins = 2;
        }
        else if (cards >= 4 && cards < 5) {
            coins = 3;
        }
        else if (cards >= 5) {
            coins = 4;
        }
    }
    return coins;
}

std::string Amethyst::getName() {
    return d_name;
}

int Amethyst::getNumCards() {
    return d_numCards;
}

void Amethyst::print(std::ostream& out) {
    out << "A" << " ";
}

Amethyst::~Amethyst(){}

//Emerald -----------------------------------------------

Emerald::Emerald() {
    
    d_name = "Emerald";
    d_numCards = CardFactory::getCardFactory()->getNumCardsByName('E');
}

int Emerald::getCoinsPerCard(int cards) {
    
    int coins = 0;
    if (cards >= 0 && cards <= d_numCards) {
        if (cards >= 0 && cards < 2) {
            coins = 0;
        }
        else if (cards >= 2 && cards < 3) {
            coins = 2;
        }
        else if (cards >= 3 && cards < 4) {
            coins = 3;
        }
        else if (cards >= 4) {
            coins = 0;
        }
    }
    return coins;
}

std::string Emerald::getName() {
    return d_name;
}

int Emerald::getNumCards() {
    return d_numCards;
}

void Emerald::print(std::ostream& out) {
    out << "E" << " ";
}

Emerald::~Emerald() {}


