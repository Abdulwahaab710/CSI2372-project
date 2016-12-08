//
//  trade_area.h
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#ifndef trade_area_h
#define trade_area_h

#include <list>
#include "card.h"
#include "cardfactory.h"

using std::list;

class TradeArea {
private:
    std::list<Card*> d_cards;
    
public:
    
    TradeArea(std::istream, CardFactory*);
    
    //adds card to the trade area but does not check if it is legal to place the card
    TradeArea& operator+=(Card*);
    
    //returns true if the card can legally be added to the TradeArea i.e. a card of the same gemstone already exists in the TradeArea
    bool legal(Card*);
    
    //removes a card of the corresponding gemstone name from the trade area
    Card* trade(std::string);
    
    //returns the number of cards currently in the area
    int numCards();
};

#endif /* trade_area_h */
