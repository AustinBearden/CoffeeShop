//Filename: Records.h
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17

#ifndef _RECORDS_H_
#define _RECORDS_H_

#include <iostream>
#include <string>

class Records {

	private:
	
	public:

		//properties
		std::string purchaseDate;

		//defualt constructor
		Records();

		//methods
		void setPurchaseDate(std::string purchaseDate);
		std::string getPurchaseDate();
		std::string getListofPurchases();

};


#endif
