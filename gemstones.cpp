//
//  gemstones.cpp
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#include "gemstones.h"


//Quartz -----------------------------------------------

Quartz::Quartz() {
    
    d_name = "Quartz";
}

int Quartz::getCardsPerCoin(int coins) {
    
    int minNumCards = 0;
    
    //coins must be between 1 and 4 (inclusive)
    if ((coins >= 1) && (coins <= 4)) {
        
        if (coins == 1) {
            minNumCards = 4;
        }
        else if (coins == 2) {
            minNumCards = 6;
        }
        else if (coins == 3) {
            minNumCards = 8;
        }
        else if (coins == 4) {
            minNumCards = 10;
        }
    }
    else {
        //Invalid input for number of coins, simply return -1
        minNumCards = -1;
    }
    
    return minNumCards;
}

std::string Quartz::getName() {
    return d_name;
}

void Quartz::print(std::ostream& out) {
    out << "Q";
}


//Hematite -----------------------------------------------

Hematite::Hematite() {
    
    d_name = "Hematite";
}

int Hematite::getCardsPerCoin(int coins) {

    int minNumCards = 0;
    
    //coins must be between 1 and 4 (inclusive)
    if ((coins >= 1) && (coins <= 4)) {
        
        if (coins == 1) {
            minNumCards = 3;
        }
        else if (coins == 2) {
            minNumCards = 6;
        }
        else if (coins == 3) {
            minNumCards = 8;
        }
        else if (coins == 4) {
            minNumCards = 9;
        }
    }
    else {
        //Invalid input for number of coins, simply return -1
        minNumCards = -1;
    }
    
    return minNumCards;
}

std::string Hematite::getName() {
    return d_name;
}

void Hematite::print(std::ostream& out) {
    out << "H";
}

//Obsidian -----------------------------------------------

Obsidian::Obsidian() {
    
    d_name = "Obsidian";
}

int Obsidian::getCardsPerCoin(int coins) {
    
    int minNumCards = 0;
    
    //coins must be between 1 and 4 (inclusive)
    if ((coins >= 1) && (coins <= 4)) {
        
        if (coins == 1) {
            minNumCards = 3;
        }
        else if (coins == 2) {
            minNumCards = 5;
        }
        else if (coins == 3) {
            minNumCards = 7;
        }
        else if (coins == 4) {
            minNumCards = 8;
        }
    }
    else {
        //Invalid input for number of coins, simply return -1
        minNumCards = -1;
    }
    
    return minNumCards;
}

std::string Obsidian::getName() {
    return d_name;
}

void Obsidian::print(std::ostream& out) {
    out << "O";
}

//Malachite -----------------------------------------------

Malachite::Malachite() {
    
    d_name = "Malachite";
}

int Malachite::getCardsPerCoin(int coins) {
    
    int minNumCards = 0;
    
    //coins must be between 1 and 4 (inclusive)
    if ((coins >= 1) && (coins <= 4)) {
        
        if (coins == 1) {
            minNumCards = 3;
        }
        else if (coins == 2) {
            minNumCards = 5;
        }
        else if (coins == 3) {
            minNumCards = 6;
        }
        else if (coins == 4) {
            minNumCards = 7;
        }
    }
    else {
        //Invalid input for number of coins, simply return -1
        minNumCards = -1;
    }
    
    return minNumCards;
}

std::string Malachite::getName() {
    return d_name;
}

void Malachite::print(std::ostream& out) {
    out << "M";
}

//Turquoise -----------------------------------------------

Turquoise::Turquoise() {
    
    d_name = "Turquoise";
}

int Turquoise::getCardsPerCoin(int coins) {
    
    int minNumCards = 0;
    
    //coins must be between 1 and 4 (inclusive)
    if ((coins >= 1) && (coins <= 4)) {
        
        if (coins == 1) {
            minNumCards = 2;
        }
        else if (coins == 2) {
            minNumCards = 4;
        }
        else if (coins == 3) {
            minNumCards = 6;
        }
        else if (coins == 4) {
            minNumCards = 7;
        }
    }
    else {
        //Invalid input for number of coins, simply return -1
        minNumCards = -1;
    }
    
    return minNumCards;
}

std::string Turquoise::getName() {
    return d_name;
}

void Turquoise::print(std::ostream& out) {
    out << "T";
}

//Ruby -----------------------------------------------

Ruby::Ruby() {
    
    d_name = "Ruby";
}

int Ruby::getCardsPerCoin(int coins) {
    
    int minNumCards = 0;
    
    //coins must be between 1 and 4 (inclusive)
    if ((coins >= 1) && (coins <= 4)) {
        
        if (coins == 1) {
            minNumCards = 2;
        }
        else if (coins == 2) {
            minNumCards = 4;
        }
        else if (coins == 3) {
            minNumCards = 5;
        }
        else if (coins == 4) {
            minNumCards = 6;
        }
    }
    else {
        //Invalid input for number of coins, simply return -1
        minNumCards = -1;
    }
    
    return minNumCards;
}

std::string Ruby::getName() {
    return d_name;
}

void Ruby::print(std::ostream& out) {
    out << "R";
}

//Amethyst -----------------------------------------------

Amethyst::Amethyst() {
    
    d_name = "Amethyst";
}

int Amethyst::getCardsPerCoin(int coins) {
    
    int minNumCards = 0;
    
    //coins must be between 1 and 4 (inclusive)
    if ((coins >= 1) && (coins <= 4)) {
        
        if (coins == 1) {
            minNumCards = 2;
        }
        else if (coins == 2) {
            minNumCards = 3;
        }
        else if (coins == 3) {
            minNumCards = 4;
        }
        else if (coins == 4) {
            minNumCards = 5;
        }
    }
    else {
        //Invalid input for number of coins, simply return -1
        minNumCards = -1;
    }
    
    return minNumCards;
}

std::string Amethyst::getName() {
    return d_name;
}

void Amethyst::print(std::ostream& out) {
    out << "A";
}

//Emerald -----------------------------------------------

Emerald::Emerald() {
    
    d_name = "Emerald";
}

int Emerald::getCardsPerCoin(int coins) {
    
    int minNumCards = 0;
    
    //coins must be between 2 and 3 (inclusive)
    if ((coins >= 2) && (coins <= 3)) {
        
        if (coins == 2) {
            minNumCards = 2;
        }
        else if (coins == 3) {
            minNumCards = 3;
        }
    }
    else {
        //Invalid input for number of coins, simply return -1
        minNumCards = -1;
    }
    
    return minNumCards;
}

std::string Emerald::getName() {
    return d_name;
}

void Emerald::print(std::ostream& out) {
    out << "E";
}

