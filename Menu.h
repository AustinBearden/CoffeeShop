//Filename: Menu.h
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17

#ifndef _MENU_H_
#define _MENU_H_
#include <iostream>
#include "Item.h"

class Menu {

	private:

	public:

		//properties
		//std::array<Item, 20> myItemArray;

		//defualt constructor
		Menu();

		//methods
		void addItem(std::string category, std::string name, double price);
		void listByCategory();
		void listByPrice();
		

};

#endif
