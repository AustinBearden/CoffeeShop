//Filename: storeInfo.cpp
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17

#include "storeInfo.h"
#include <iostream>
#include <map>

storeInfo::storeInfo(std::string nameOfStore, std::string storeHours, std::string address) {

    //map:
    std::map<std::string, std::string> info;

    info["Store Name"] = nameOfStore;
    info["Store Hours"] = storeHours;
    info["Store Address"] = address;

    //{"Store Name", nameOfStore},
    //{"Store Hours", storeHours},
    //{"Store Address", address}

}

void storeInfo::changeHours() {

}

void storeInfo::changeAddress() {

}