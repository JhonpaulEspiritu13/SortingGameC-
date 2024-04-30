#include <iostream>
#include <map>
#include <cstdlib>
#include <ctime>
#include "Item.h"
using namespace std;

int main(){
	// The Item map to reference both item IDs and item names from.
	map<int, string> itemMap;
	itemMap[0] = "error";
	itemMap[1] = "Lemon";
	itemMap[2] = "Apple";
	return 0;
}
