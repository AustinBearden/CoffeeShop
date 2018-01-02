//Filename: Item.cpp
//Project: CoffeeShop
//Author: Austin Bearden
//Date Created: 12/28/17

#include "Item.h"
#include <string>
#include <cstring>
#include <stdlib.h>


Item::Item(std::string categoryIt, std::string nameIt, double priceIt) {

	name = nameIt;
	category = categoryIt;
	price = priceIt;

}

std::string Item::getName() {

	return name;

}

void Item::setName(std::string name) {


}

std::string Item::getCategory() {

	return category;

}

void Item::setCategory(std::string category) {

}

double Item::getPrice() {

	return price;

}

void Item::setPrice(double price) {

}
