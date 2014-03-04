#include "Map.h"
#include <map>
#include <iostream>
#include <string>
using namespace std;

// STL map and iterator are used as clients for this Map class
// Map is not a derived class of STL map to explore the effect of multiple
// inheritance in a controlled way. STL map does not allow duplicate keys.
map<string, string> map1;
std::map<string, string>::iterator p;

// Default Constructor
Map::Map()
{
	// Removal of this empty constructor caused LINK errors when trying to
	// build the derived classes.
}

// Insert an element
void Map::insert(string key, string val)
{ 
	map1.insert(map<string, string>::value_type(key, val));
}

// Delete an element at a given key
void Map::del(string key)
{
	map1.erase(key);
}

// Returns true if the key occurs in the Map
bool Map::isMapped(string key) const
{
	// find(key) returns a pointer, key exists if pointer is not past the end
	return (map1.find(key) != map1.end());
}

// Prints all of the values in the Map
void Map::print()
{
	cout << "Keys : Values" << endl;
	for (p = map1.begin(); p != map1.end(); p++)
		cout << p->first << " : " << p->second << endl;
}
