//
//  players.cpp
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#include "players.h" 

Player::Player(std::istream& in, CardFactory*){
   in >> player_name;
}

Player::Player(std::string& name){
   player_name = name;
}

//returns the name of the player
std::string Player::getName(){
   return player_name;
}

//returns the number of coins held by the player
int Player::getCoins(){
   return coins;
}

//add a number of coins
Player& Player::operator+=(int _coins){
   coins += _coins;
}

//returns the number of chains possessed by the player (either 2 or 3)
int Player::getMaxNumChains(){
    
}

//returns the non-zero chains
int Player::getNumChains(){
   return chain;
}

//returns the chain at position i
Chain_Base& Player::operator[](int i){

}

//adds an empty third chain to the player for TWO OR THREE coins !!!DOUBLE CHECK WITH PROF!!!
//if the player does not have enough coins, a NotEnoughCoins exception should be thrown
void Player::buyThirdChain(){
    
}

//if bool = false -> print top card of player's hand
//if bool = true -> print all of the cards in the player's hand
void Player::printHand(std::ostream&, bool){
    
}
 
