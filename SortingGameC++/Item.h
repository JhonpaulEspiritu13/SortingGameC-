#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std;

class Item{
	private:
		//id is to assign each different type of item a number ID for calling an object based off of its ID
		int id;
		string name;
		// Most functionality in the Item class in Godot is actually animation and mouse events.
		// That's why the C++'s Item class remains barebones, as all it needs to do is hold the name and item ID.
	public:
		// Setter for Item Name
		void setName(string _name);

		// Getter for Item ID
		int getID();
		// Getter for Item Name
		string getName();


		// Constructs an item with ID.
		Item(int _id);
		// Constructs an Item with ID and Name.
		Item(int _id, string _name);
};

#endif