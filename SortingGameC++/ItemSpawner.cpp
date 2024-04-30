#include "ItemSpawner.h"

// Item Spawner constructor, initialzing its item ID.
// It also initializes the Map to pick what the itemp will be.
ItemSpawner::ItemSpawner(int itemID, const map<int, string>& itemMap) {
	this->itemID = itemID;
	this->mapOfItems = itemMap;
}

// Changes the Spawner ID to another item.
void ItemSpawner::setSpawner(int changeID) {
	this->itemID = changeID;
}

// Checks to see if currentItem is empty.
bool ItemSpawner::isEmpty() {
	return currentItem == NULL;
}

// Spawns a new item and place it into the currentItem.
void ItemSpawner::spawnItem() {
	// Ensures that the current item is not in the Item Spawner.
	if (isEmpty()) {
		// Creates a new unique pointer.
		unique_ptr<Item> newItem = make_unique<Item>(itemID);
		// Sets its ID to the same ID as the spawner, and the name in the map, indexed by ID.
		// (It's weird to do that in C++, but in Godot, that's how we set stuff for mapping).
		newItem->setName(mapOfItems[itemID]);

		// Sets ownership of the current item to the newly created one.
		currentItem = move(newItem);
	}
}