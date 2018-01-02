//Filename: Menu.cpp
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17

#include "Menu.h"
#include "Item.h"
#include <array>
#include <stdlib.h>
#include <String>

Menu::Menu(int numberOfItems) {

    //set an empyt 'Menu' array
    //Item* myNewArray = new Item[numberOfItems];
    Item myItemArray[4];

}

void Menu::addItem(std::string category, std::string name, double price) {

    Item * newItem = new Item(category, name, price);

}

void Menu::listByCategory() {


}

void Menu::listByPrice() {

    

}
