#pragma once
#include <string>

class Item {
public:
	Item(std::string itemName, long id, double price, int numberInStock);

	// Getters for each variable data
	std::string getItemName();
	long getID();
	double getPrice();
	int getNumberInStock();

	// Setters for each variable
	void setItemName(std::string itemName);
	void setID(long id);
	void setPrice(double price);
	void setNumberInStock(int numberInStock);

private:
	std::string itemName;
	long id;
	double price;
	int numberInStock;
};



// Print function to present all item data
void printItemData(Item item);


