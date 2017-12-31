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
		Item(string category, string name, double price);

		//method
		string getName();
		void setName(string name);

		string getCategory();
		void setCategory(string category);

		double getPrice();
		void setPrice(double price);



};

#endif

