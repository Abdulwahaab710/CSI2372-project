//
//  deck.h
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#ifndef deck_h
#define deck_h

#include <vector>
#include "card.h"
#include "cardfactory.h"

using std::vector;

class Deck {
    
private:
    std::vector<Card*> d_cards;
    
public:
    
    Deck(std::istream&, CardFactory*);
    
    //returns and removes the top card of the deck 
    Card* draw();
    
    void print(std::ostream&);

};

#endif /* deck_h */
