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
		double storeHours;
		//
		//what format should this variable be in?	
		int address;

		//constructor
		storeInfo(string nameOfStore, double storeHours, int address);

		//methods
		void changeHours();

		void changeAddress();


};

#endif
