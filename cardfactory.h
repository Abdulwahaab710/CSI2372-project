//
//  cardfactory.h
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#ifndef cardfactory_h
#define cardfactory_h

class Deck;

class CardFactory {
public:
    //returns a pointer to the only instance of CardFactory
    static CardFactory* getCardFactory();
    
    //returns a deck with all 104 gemstone cards
    Deck getDeck();
};

#endif /* cardfactory_h */

