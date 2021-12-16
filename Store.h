#pragma once
#include "Item.h"
#include <vector>

class Store {
public:
	Store(std::vector<Item> storeInv);
	void printStoreInventory(std::vector<Item> storeInv);
	std::vector<Item> getStoreInv();
private:
	std::vector<Item> storeInv;
};

