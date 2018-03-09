//Filename: Purchase.h
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 1/2/18

#ifndef _PURCHASE_H_
#define _PURCHASE_H_

#include <iostream>

class Purchase {

    private:
    
    public:

        //properties
        std::string name;
        std::string purchaseDate;

        //defualt constructor
        Purchase();

        //alternate constructor Purchase(name, purchaseDate)
        Purchase(std::string itemName, std::string itemPurchaseDate);

        //methods
        void setName(std::string itemName);
        void setPurchaseDate(std::string itemPurchaseDate);


};

#endif