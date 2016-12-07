//
//  main.cpp
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#include <iostream>
#include "gemstones.h"
#include "cardFactory.h"
#include "deck.h"
#include "discard_pile.h"

using namespace std;

int main(int argc, const char * argv[]) {

    CardFactory* factory = CardFactory::getCardFactory();
    Deck d = factory->getDeck();
    cout << "\nShuffled deck:" << endl;
    d.print(cout);
    cout << " " << endl;
    DiscardPile dp;
    cout << "\nDiscard Pile:" << endl;
    dp.print(cout);
    cout << " " << endl;
    
    
    cout << "Draw a card from the deck: ";
    Card* card = d.draw();
    card->print(cout);
    cout << " " << endl;
    d.print(cout);
    cout << " " << endl;
    
    cout << "Place card in discard pile: ";
    dp+=card;
    cout << " " << endl;
    dp.print(cout);
    cout << " " << endl;
    
    cout << "Pick up card from discard pile: ";
    dp.pickup()->print(cout);
    cout << " " << endl;
    cout << "Show top card of discard pile ";
    dp.top()->print(cout);
    
    return 0;
}
