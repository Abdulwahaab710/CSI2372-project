//
//  discard_pile.h
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#ifndef discard_pile_h
#define discard_pile_h

#include <vector>
#include "cardfactory.h"
#include "card.h"

using std::vector;

class DiscardPile {
private:
    std::vector<Card*> d_cards;
    
public:
    
    DiscardPile();
    
    DiscardPile(std::istream&, CardFactory*);
    
    //discards/adds a card to the pile
    DiscardPile& operator+=(Card*);
    
    //returns and removes the top card from the discard pile
    Card* pickup();
    
    //returns but does not remove the top card from the discard pile
    Card* top();
    
    void print(std::ostream&);
    
};

#endif /* discard_pile_h */
