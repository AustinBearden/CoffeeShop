//Filename: Menu.cpp
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17

#include "Menu.h"
#include "Item.h"
#include <array>

Menu::Menu(numberOfItems) {

    //set an empyt 'Menu' array
    Item* myNewArray = new Item[numberOfItems];

}

void Menu::addItem(string category, string name, double price) {

    Item * newItem = new Item(category, name, price);

}

void Menu::listByCategory() {


}

void Menu::listByPrice() {


    
}
