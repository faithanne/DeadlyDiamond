// Derived class: AssociativeMemory header file
// Subclass of Map
#ifndef ASSOCIATIVEMEMORY_H
#define ASSOCIATIVEMEMORY_H

#include "Map.h"
#include <iostream>
using namespace std;

class AssociativeMemory : virtual public Map	// Virtual base class avoids
{												// Deadly Diamond
public:
	AssociativeMemory();
	string getKey(string val);
	bool isVal(string val);
	void print();								// Virtual keyword is not necessary
protected:										// for overridden subclass functions
	string valCode;
};

#endif