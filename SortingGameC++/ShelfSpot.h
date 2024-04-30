#ifndef SHELFSPOT_H
#define SHELFSPOT_H

#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

class ShelfSpot
{
public:
	// Get the current item's ID.
	int getItemID();

	// Get the Shelf Spot's name.
	string getSpotName();

	// Sets the Shelf Spot's name.
	void setSpotName(string spotName);

	// Clears the current item out of the shelf spot.
	void clear();

	// Imports an item from another source.
	void importItem(unique_ptr<Item> itemToImport);

	// Exports the current item unique pointer.
	unique_ptr<Item> exportItem();

	// Creates a new Shelf Spot object with no set Item.
	ShelfSpot(string spotName);

	// Creates a new Shelf Spot object with an already set Item.
	ShelfSpot(string spotName, unique_ptr<Item> importIt);
private:
	string spotName;
	unique_ptr<Item> currentItem;
};

#endif
