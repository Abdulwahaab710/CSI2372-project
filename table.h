//
//  table.h
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#ifndef table_h
#define table_h

#include <string>
#include "players.h"
#include "deck.h"
#include "discard_pile.h"
#include "trade_area.h"
#include "cardfactory.h"
#include <iostream>

using std::string;

class Table {
    
private:
    Player d_players [2];
    Deck d_deck;
    DiscardPile d_discardPile;
    TradeArea d_tradeArea;
    
public:
    
    Table(std::istream&, CardFactory*);
    
    Table(Player _players[2], const Deck& _deck, const DiscardPile& _discardPile, const TradeArea& _tradeArea);
    
    //returns true when the player has won (occurs when all cards from the deck has been exshausted and player has the most coins)
    //the name of the player is returned by reference
    bool win(std::string&);
    
    //prints table with all of its content
    void print(std::ostream&);
    
    
};


#endif /* table_h */
