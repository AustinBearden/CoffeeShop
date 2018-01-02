//Filename: storeInfo.h
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17


#ifndef _STOREINFO_H_
#define _STOREINFO_H_

#include <String>
#include <stdlib.h>

class storeInfo {

	private:

	public:

		//name of store
		std::string nameOfStore;
		//properties
		std::string storeHours;
		//
		//what format should this variable be in?	
		std::string address;

		//constructor
		storeInfo(std::string nameOfStore, std::string storeHours, std::string address);

		//methods
		void changeHours();

		void changeAddress();


};

#endif
