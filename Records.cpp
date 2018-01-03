//Filename: Records.cpp
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17

#include "Records.h"
#include "Purchase.h"
#include <vector>
#include <string>
#include <iostream>

//defualt constructor
Records::Records() {

    //create a vector
    //std::vector<int> myPurchaseVector(20); //so its says that 'myPurchaseVector' is undefined. Is this okay?

    std::vector<Purchase> purchaseRecords (10, Purchase());

    std::vector<int> myvector;
    for (int i=1; i<=5; i++) { 
        myvector.push_back(i);
        std::cout << "Content of 'myvector' vector: " << myvector[i-4] << std::endl;
        
    }

}

void Records::setPurchaseDate(std::string purchaseDate) {

    

}

std::string Records::getPurchaseDate() {

    
    return "Amazing purchase date!!";
}

std::string Records::getListofPurchases() {

    std::string purchaseRecordsString = "Hello my friends...Hey! This ain't no records";

    return purchaseRecordsString;

}