#include "Item.h"
#include <iostream>

Item::Item(std::string itemName, long id, double price, int numberInStock) 
	: itemName{ itemName }, id{ id }, price{ price }, numberInStock{ numberInStock } {}

// Getters for each variable data
std::string Item::getItemName() {
	return itemName;
}
long Item::getID() {
	return id;
}
double Item::getPrice() {
	return price;
}
int Item::getNumberInStock() {
	return numberInStock;
}

// Setters for each variable
void Item::setItemName(std::string itemName) {
	itemName = itemName;
}
void Item::setID(long id) {
	id = id;
}
void Item::setPrice(double price) {
	price = price;
}
void Item::setNumberInStock(int numberInStock) {
	numberInStock = numberInStock;
}

// Print function to present all item data
void printItemData(Item item) {
	std::cout << "Item name: " << item.getItemName() << "\n" << 
		"ID: " << item.getID() << "\n" << 
		"Price: " << item.getPrice() << "\n" << 
		"Number in stock: " << item.getNumberInStock();
}