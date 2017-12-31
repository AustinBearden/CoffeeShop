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
		int name;
		int category;
		double price;

		//constructor
		Item(int categoryIt, int nameIt, double priceIt);

		//method
		int getName();
		void setName(int nameIt);

		int getCategory();
		void setCategory(int categoryIt);

		double getPrice();
		void setPrice(double priceIt);


};

#endif

