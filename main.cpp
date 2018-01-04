//Filename: main.cpp
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 1/2/18

#include <iostream>
#include "Menu.h"
#include "Records.h"

int main() {

    std::cout << "This is the main file" << std::endl;

    Menu * myMenu = new Menu(4);

    //add items to the menu
    

    Records * myRecord = new Records();

    //add purchases

    //get purchase date //if they ask for purchase records
    std::cout << "Purchase Records: " << myRecord->getPurchaseDate() << std::endl;

    return 0;
}