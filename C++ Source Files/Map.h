// Base class: Map header file
#ifndef MAP_H
#define MAP_H

#include <map>
#include <iostream>
using namespace std;

class Map
{
public:
	Map();
	void insert(string key, string val);
	void del(string key);
	bool isMapped(string key) const;
	virtual void print();	// Declared virtual in this base class to avoid
							// Deadly Diamond. Also, not const because iterator
							// p is not constant.
protected:					// Protected variables are available to subclasses
	map<string, string> map1;
	map<string, string>::iterator p;
};

#endif