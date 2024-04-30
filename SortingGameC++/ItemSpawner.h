#ifndef ITEMSPAWNER_H
#define ITEMSPAWNER_H

#include "Item.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

class ItemSpawner {
private:
	int itemID;
	map<int, string> mapOfItems;
	unique_ptr<Item> currentItem;
public:
	// Item Spawner constructor, initialzing its item ID.
	ItemSpawner(int itemID, const map<int, string>& itemMap);

	// Changes the Spawner ID to another item.
	void setSpawner(int changeID);

	// Checks to see if currentItem is empty.
	bool isEmpty();

	// Spawns a new item and place it into the currentItem.
	void spawnItem();
};

#endif
