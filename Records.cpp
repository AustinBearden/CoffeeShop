//Filename: Records.cpp
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17

#include "Records.h"
#include "Purchase.h"
#include <iostream>

//defualt constructor
Records::Records() {

    //create a vector
    //std::vector<int> myPurchaseVector(20); //so its says that 'myPurchaseVector' is undefined. Is this okay?

    std::vector<int> v = {1,2,3,4};

}

void Records::setPurchaseDate(std::string purchaseDate) {

    

}

std::string Records::getPurchaseDate() {

    
    return "Amazying purchase date!!";
}