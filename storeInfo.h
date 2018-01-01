//Filename: storeInfo.h
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17


#ifndef _STOREINFO_H_
#define _STOREINFO_H_

class storeInfo {

	private:

	public:

		//name of store
		string nameOfStore;
		//properties
		string storeHours;
		//
		//what format should this variable be in?	
		string address;

		//constructor
		storeInfo(string nameOfStore, string storeHours, string address);

		//methods
		void changeHours();

		void changeAddress();


};

#endif
