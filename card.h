//
//  card.h
//  Bohnanza
//
//  Created by Ashish Khiani (8385008) and Abdulwahaab Ahmed (8260268)
//

#ifndef card_h
#define card_h

#include <string>

class Card {
protected:
    
    std::string d_name;
    
public:
    
    //returns the minimum number of cards necessary for the given number of coins
    virtual int getCardsPerCoin(int coins) = 0;
    
    //returns the full name of the card
    virtual std::string getName() = 0;
    
    //inputs the first character of the card into the output stream supplied as an argument
    virtual void print(std::ostream& out) = 0;
    
    virtual ~Card() {}

};

#endif /* card_h */
