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

    Records * myNewRecord = new Records();

    return 0;
}