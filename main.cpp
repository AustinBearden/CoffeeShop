//Filename: main.cpp
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 1/2/18

#include <iostream>
#include "Menu.h"
#include "Records.h"

int main() {

    std::cout << "This is the main file" << std::endl;

    //Menu * myMenu = new Menu(4);

    std::string categoryVar;
    std::string nameVar;
    double priceVar;

    //add items to the menu
    //add a max of 20 items
    std::cout << "Please items to the menu: " << std::endl;
    std::cout << "Category: ";
    std::cin >> categoryVar; //well the strings don't take spaces. This is a problem for our menu, category and item names
    std::cout << "Name: ";
    std::cin >> nameVar; //well the strings don't take spaces. This is a problem for our menu, category and item names //**need to fix this**
    std::cout << "Price: ";
    std::cin >> priceVar;

    std::string strPriceVar = std::to_string(priceVar);

    std::cout << "Item's Category, Name, and Price: " << categoryVar + ", " + nameVar + ", and " + strPriceVar + "." << std::endl;

    Records * myRecord = new Records();

    //add purchases

    //get purchase date //if they ask for purchase records
    std::cout << "Purchase Records: " << myRecord->getPurchaseDate() << std::endl;

    return 0;
