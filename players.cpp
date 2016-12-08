//
//  players.cpp
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#include "players.h"
#include <iostream>

Player::Player(std::istream& in, CardFactory*){
    in >> d_name;
}

Player::Player(){

}

Player::Player(std::string& name, Hand& hand){
    d_name = name;
    d_hand = hand;
}

//returns the name of the player
std::string Player::getName() const{
    return d_name;
}

//returns the number of coins held by the player
int Player::getCoins() const{
    return coins;
}

//add a number of coins
Player& Player::operator+=(int _coins){
    coins += _coins;
    return *this;
}

//returns the number of chains possessed by the player (either 2 or 3)
int Player::getMaxNumChains() const{
    return d_maxChains;
}

//returns the non-zero chains
int Player::getNumChains() const{
    return d_currentChain;
}

//returns the chain at position i
Chain_Base& Player::operator[](int i){
    return d_chain->at(i);
}

//adds an empty third chain to the player for three coins
//if the player does not have enough coins, a NotEnoughCoins exception should be thrown
void Player::buyThirdChain(){
    if (d_maxChains > 1 && d_maxChains != 3){
        if(coins < 3){
            throw new NotEnoughCoins;
        } else{
            d_maxChains++;
            coins -= 3;
        }
    } else {
        throw new ReachedMaxChain;
    }
}

//if flag = false -> print top card of player's hand
//if flag = true -> print all of the cards in the player's hand
void Player::printHand(std::ostream& out, bool flag){
    if (flag) {
        d_hand.print(out);
    }
    else {
        d_hand.top()->print(out);
    }
    
    /*
    
     */
}
