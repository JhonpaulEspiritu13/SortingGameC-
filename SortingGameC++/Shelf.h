#ifndef SHELF_H
#define SHELF_H

#include "ShelfSpot.h"

using namespace std;

class Shelf
{
private:
	ShelfSpot shelfSpot_01;
	ShelfSpot shelfSpot_02;
	ShelfSpot shelfSpot_03;
	ShelfSpot shelfSpot_04;
public:
	// Shelf Spot Getters.
	ShelfSpot& getShelfSpot1();
	ShelfSpot& getShelfSpot2();
	ShelfSpot& getShelfSpot3();
	ShelfSpot& getShelfSpot4();

	// Creates a new Shelf object, initializing default shelf spot names.
	Shelf();

	// Creates a new Shelf object, initializing all shelf spots' names.
	Shelf(string _shelfSpot_01_name, string _shelfSpot_02_name, string _shelfSpot_03_name, string _shelfSpot_04_name);
};

#endif
