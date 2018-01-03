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

        //alternate constructor

        //methods
        void setName(std::string itemName);
        void setPurchaseDate(std::string itemPurchaseDate);


};

#endif