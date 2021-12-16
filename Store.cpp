#include "Store.h"
#include <iostream>
#include <vector>

Store::Store(std::vector<Item> storeInv)
	: storeInv{ storeInv } {}

void Store::printStoreInventory(std::vector<Item> storeInv) {
	int size = storeInv.size();

	std::cout << "Store: \n";
	for (int i = 0; i < size; i++) {
		std::cout << storeInv[i].getItemName() << " X " << storeInv[i].getNumberInStock() << "\n";
	}
}

std::vector<Item> Store::getStoreInv() {
	return storeInv;
}