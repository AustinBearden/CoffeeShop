//Filename: Item.h
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17

#ifndef _ITEM_H_
#define _ITEM_H_

#include <string>
#include <stdlib.h>

class Item {

	private:

	public:

		//properities
		std::string name;
		std::string category;
		double price;

		//constructor
		Item(std::string categoryIt, std::string nameIt, double priceIt);

		//method
		std::string getName();
		void setName(std::string nameIt);

		std::string getCategory();
		void setCategory(std::string categoryIt);

		double getPrice();
		void setPrice(double priceIt);


};

#endif

