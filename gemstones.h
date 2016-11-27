//
//  gemstones.h
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#ifndef gemstones_h
#define gemstones_h

#include "card.h"

class Quartz: public Card {
public:
    
    //returns the number of cards necessary for the given number of coins
    int getCardsPerCoin(int coins);
    
    //returns the full name of the card
    std::string getName();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
    
};

class Hematite: public Card {
public:
    
    //returns the number of cards necessary for the given number of coins
    int getCardsPerCoin(int coins);
    
    //returns the full name of the card
    std::string getName();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
};

class Obsidian: public Card {
public:
    
    //returns the number of cards necessary for the given number of coins
    int getCardsPerCoin(int coins);
    
    //returns the full name of the card
    std::string getName();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
};

class Malachite: public Card {
public:
    
    //returns the number of cards necessary for the given number of coins
    int getCardsPerCoin(int coins);
    
    //returns the full name of the card
    std::string getName();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
};

class Turquoise: public Card {
public:
    
    //returns the number of cards necessary for the given number of coins
    int getCardsPerCoin(int coins);
    
    //returns the full name of the card
    std::string getName();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
};

class Ruby: public Card {
public:
    
    //returns the number of cards necessary for the given number of coins
    int getCardsPerCoin(int coins);
    
    //returns the full name of the card
    std::string getName();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
};

class Amethyst: public Card {
public:
    
    //returns the number of cards necessary for the given number of coins
    int getCardsPerCoin(int coins);
    
    //returns the full name of the card
    std::string getName();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
};

class Emerald: public Card {
public:
    
    //returns the number of cards necessary for the given number of coins
    int getCardsPerCoin(int coins);
    
    //returns the full name of the card
    std::string getName();
    
    //inputs the first character of the card into the output stream supplied as an argument
    void print(std::ostream& out);
};

#endif /* gemstones_h */
