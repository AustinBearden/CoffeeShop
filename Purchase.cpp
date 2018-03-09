//Filename: Purchase.cpp
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 1/2/18

#include "Purchase.h"
#include <iostream>

//defualt constructor
Purchase::Purchase() {

    name = "unknown";
    purchaseDate = "Today...But we will need to get this feature working!!";

}

//alternate constructor
Purchase::Purchase(std::string itemName, std::string itemPurchaseDate) {

    name = itemName;
    purchaseDate = itemPurchaseDate;
    
}

void Purchase::setName(std::string itemName) {

    name = itemName;

}

void Purchase::setPurchaseDate(std::string itemPurchaseDate) {

    purchaseDate = itemPurchaseDate;

}