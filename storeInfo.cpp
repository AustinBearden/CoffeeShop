//Filename: storeInfo.cpp
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17

#include "storeInfo.h"
#include <stdlib.h>
#include <String>

storeInfo::storeInfo(std::string nameOfStore, std::string storeHours, std::string address) {

    //map:
    std::Map<std::string, std::string> info = 

    {"Store Name", nameOfStore},
    {"Store Hours", storeHours},
    {"Store Address", address}

}

void storeInfo::changeHours() {

}

void storeInfo::changeAddress() {

}