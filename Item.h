//Filename: Item.h
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17

#ifndef _ITEM_H_
#define _ITEM_H_

class Item {

	private:

	public:

		//properities
		string name;
		string category;
		double price;

		//constructor
		Item(category, name, price);

		//method
		string getName();
		void setName(name);

		string getCategory();
		void setCategory(category);

		double getPrice();
		void setPrice(price);



};

#endif

