#include "ShelfSpot.h"

// Get the current item's ID.
int ShelfSpot::getItemID() {
	return currentItem->getID();
}

// Get the Shelf Spot's name.
string ShelfSpot::getSpotName() {
	return spotName;
}

// Sets the Shelf Spot's name.
void ShelfSpot::setSpotName(string spotName) {
	this->spotName = spotName;
}

// Clears the current item out of the shelf spot.
void ShelfSpot::clear() {
	// Deletes the object in current item, leaving the variable empty.
	currentItem.reset();
}

// Imports an item from another unique_pointer.
void ShelfSpot::importItem(unique_ptr<Item> itemToImport) {
	// Checks to make sure shelf spot is empty.
	if (currentItem == NULL) {
		if (itemToImport == NULL) {
			throw invalid_argument("Imported Item is null.");
		}
		// Transfers pointer ownership to this object.
		currentItem = move(itemToImport);
	}
	// Otherwise, raise an error.
	else {
		throw exception("Shelf Spot is already full.");
	}
}

// Exports the current item unique pointer.
unique_ptr<Item> ShelfSpot::exportItem() {
	// Checks to make sure shelf spot has an item.
	if (currentItem != NULL) {
		return move(currentItem);
	}
}

// Creates a new Shelf Spot object with no set Item.
ShelfSpot::ShelfSpot(string spotName) {
	this->spotName = spotName;
}

// Creates a new Shelf Spot object with an already set Item.
ShelfSpot::ShelfSpot(string spotName, unique_ptr<Item> importIt) {
	this->spotName = spotName;
	importItem(move(importIt));
}