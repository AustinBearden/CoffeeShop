//Filename: Menu.cpp
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17

#include "Menu.h"
#include "Item.h"
#include <array>
#include <iostream>

Menu::Menu() {


}


void Menu::addItem(std::string category, std::string name, double price) {

    Item * newItem = new Item(category, name, price);
    myItemArray.front() = newItem;

}

void Menu::listByCategory() {


}

void Menu::listByPrice() {

    

}
