//
//  players.h
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#ifndef players_h
#define players_h

//#include "chain_base.h"
#include "cardfactory.h"
#include <string>

using std::string;

class Player {
    
public:
    
    Player(std::istream&, CardFactory*);
    
    Player(std::string&);
    
    //returns the name of the player
    std::string getName();
    
    //returns the number of coins held by the player
    int getCoins();
    
    //add a number of coins
    Player& operator+=(int);
    
    //returns the number of chains possessed by the player (either 2 or 3)
    int getMaxNumChains();
    
    //returns the non-zero chains
    int getNumChains();
    
    //returns the chain at position i
    //Chain_Base& operator[](int i);
    
    //adds an empty third chain to the player for TWO OR THREE coins !!!DOUBLE CHECK WITH PROF!!!
    //if the player does not have enough coins, a NotEnoughCoins exception should be thrown
    void buyThirdChain();
    
    //if bool = false -> print top card of player's hand
    //if bool = true -> print all of the cards in the player's hand
    void printHand(std::ostream&, bool);
    
    
    
    
    
};

#endif /* players_h */