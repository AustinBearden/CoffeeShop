//Filename: Menu.h
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17

#ifndef _MENU_H_
#define _MENU_H_
#include <stdlib.h>

class Menu {

	private:

	public:

		//properties
		

		//constructor
		Menu(int);
		

		//methods
		void addItem(std::string category, std::string name, double price);
		void listByCategory();
		void listByPrice();
		

};

#endif
