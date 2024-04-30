#include "Shelf.h"

// Getters
ShelfSpot& Shelf::getShelfSpot1() {
	return shelfSpot_01;
}
ShelfSpot& Shelf::getShelfSpot2() {
	return shelfSpot_02;
}

ShelfSpot& Shelf::getShelfSpot3() {
	return shelfSpot_03;
}

ShelfSpot& Shelf::getShelfSpot4() {
	return shelfSpot_04;
}

// Creates a new Shelf object, initializing default shelf spot names.
Shelf::Shelf() : shelfSpot_01("Shelf Spot 1"), shelfSpot_02("Shelf Spot 2"), shelfSpot_03("Shelf Spot 3"), shelfSpot_04("Shelf Spot 4") {
}

// Creates a new Shelf object, initializing all shelf spots' names.
Shelf::Shelf(string _shelfSpot_01_name, string _shelfSpot_02_name, string _shelfSpot_03_name, string _shelfSpot_04_name) :
	shelfSpot_01(_shelfSpot_01_name), shelfSpot_02(_shelfSpot_02_name), shelfSpot_03(_shelfSpot_03_name), shelfSpot_04(_shelfSpot_04_name) {
}