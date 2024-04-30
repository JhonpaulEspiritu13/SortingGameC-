#include "Item.h"

// Setter for Item Name
void Item::setName(string _name) { name = _name; }

// Getter for Item ID
int Item::getID() { return id; }
// Getter for Item Name
string Item::getName() { return name; }

// Constructs an item with ID.
Item::Item(int _id) {
	id = _id;
	name = "error";
}

// Constructs an Item with ID and Name.
Item::Item(int _id, string _name) {
	id = _id;
	name = _name;
}