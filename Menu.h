//Filename: Menu.h
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17

#ifndef _MENU_H_
#define _MENU_H_

class Menu {

	private:

	public:

		//properties
		

		//constructor
		Menu(numberOfItems);
		

		//methods
		void addItem(string category, string name, double price);
		void listByCategory();
		void listByPrice();
		

};

#endif
