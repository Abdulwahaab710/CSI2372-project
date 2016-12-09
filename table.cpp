//
//  table.cpp
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#include "table.h"


//Table::Table(std::istream& in, CardFactory * cardFactory) {
//    
//}

Table::Table(Player _players[2], const Deck& _deck, const DiscardPile& _discardPile, const TradeArea& _tradeArea) {
    d_players[0] = _players[0];
    d_players[1] = _players[1];
    d_discardPile = _discardPile;
    d_tradeArea = _tradeArea;
    d_deck = _deck;
    
    
}

bool Table::win(std::string& winner) {
    if (d_deck.isEmpty()){
        if(d_players[0].getCoins() > d_players[1].getCoins()){
            winner = d_players[0].getName();
            return true;
        }else if (d_players[1].getCoins() > d_players[0].getCoins()){
            winner = d_players[1].getName();
            return true;
        }
    }
    return false;
}

void Table::print(std::ostream& out) {
    out << d_players[0];
    out << d_players[1];
    d_discardPile.print(out);
    d_deck.print(out);
}
