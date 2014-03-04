// Derived class: Dictionary header file
// Subclass of Map
#ifndef DICTIONARY_H
#define DICTIONARY_H

#include "Map.h"
#include <map>
#include <iostream>
using namespace std;

class Dictionary : virtual public Map	// Virtual base class avoids
{										// Deadly Diamond
public:
	Dictionary();
	string getVal(string key);
	void print();						// Virtual keyword is not necessary
protected:								// for overridden subclass functions
	string nameCode;
};

#endif