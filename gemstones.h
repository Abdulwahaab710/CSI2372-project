//
//  gemstones.h
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#ifndef gemstones_h
#define gemstones_h

#include <iostream>
#include <vector>
#include "card.h"

class Quartz: public Card {
public:
    
    Quartz();
    
    //returns the minimum number of cards necessary for the given number of coins
    int getCoinsPerCard(int cards);
    
    //returns the full name of the card
    std::string getName();
    
    //returns the total number of cards that exist in the game
    int getNumCards();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
    
    ~Quartz();
    
};

class Hematite: public Card {
public:
    
    Hematite();
    
    //returns the minimum number of cards necessary for the given number of coins
    int getCoinsPerCard(int cards);
    
    //returns the full name of the card
    std::string getName();
    
    //returns the total number of cards that exist in the game
    int getNumCards();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
    
    ~Hematite();

};

class Obsidian: public Card {
public:
    
    Obsidian();
    
    //returns the minimum number of cards necessary for the given number of coins
    int getCoinsPerCard(int cards);
    
    //returns the full name of the card
    std::string getName();
    
    //returns the total number of cards that exist in the game
    int getNumCards();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
    
    ~Obsidian();
};

class Malachite: public Card {
public:
    
    Malachite();
    
    //returns the minimum number of cards necessary for the given number of coins
    int getCoinsPerCard(int cards);
    
    //returns the full name of the card
    std::string getName();
    
    //returns the total number of cards that exist in the game
    int getNumCards();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
    
    ~Malachite();
};

class Turquoise: public Card {
public:
    
    Turquoise();
    
    //returns the minimum number of cards necessary for the given number of coins
    int getCoinsPerCard(int cards);
    
    //returns the full name of the card
    std::string getName();
    
    //returns the total number of cards that exist in the game
    int getNumCards();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
    
    ~Turquoise();
};

class Ruby: public Card {
public:
    
    Ruby();
    
    //returns the minimum number of cards necessary for the given number of coins
    int getCoinsPerCard(int cards);
    
    //returns the full name of the card
    std::string getName();
    
    //returns the total number of cards that exist in the game
    int getNumCards();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
    
    ~Ruby();
};

class Amethyst: public Card {
public:
    
    Amethyst();
    
    //returns the minimum number of cards necessary for the given number of coins
    int getCoinsPerCard(int cards);
    
    //returns the full name of the card
    std::string getName();
    
    //returns the total number of cards that exist in the game
    int getNumCards();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
    
    ~Amethyst();

};

class Emerald: public Card {
public:
    
    Emerald();
    
    //returns the minimum number of cards necessary for the given number of coins
    int getCoinsPerCard(int cards);
    
    //returns the full name of the card
    std::string getName();
    
    //returns the total number of cards that exist in the game
    int getNumCards();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
    
    ~Emerald();
};

#endif /* gemstones_h */
