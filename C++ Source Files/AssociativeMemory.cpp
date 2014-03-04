#include "AssociativeMemory.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;

string valCode;

// Default Constructor
AssociativeMemory::AssociativeMemory() : Map()
{
	valCode = "Phone Numbers";
}

// Returns the key corresponding to a value
string AssociativeMemory::getKey(string val)		// No function exists in
{													// STL Map that returns a
	for (p = map1.begin(); p != map1.end(); p++)	// key given a value, so
		if (p->second == val) return p->first;		// elements must be
	return "Value is not in memory.";				// iterated through.
}

// Returns true if the value does exist in the Associative Memory
bool AssociativeMemory::isVal(string val)
{
	map<string, string>::iterator p;				// No function exists in
	for (p = map1.begin(); p != map1.end(); p++)	// STL Map that checks for
		if (p->second == val) return 1;				// the existence of values,
	return 0;										// so elements must be
}													// iterated through.

// Prints the contents of the Associative Memory
void AssociativeMemory::print()
{
	cout << "Keys : " << valCode << endl;
	map<string, string>::iterator p;
	for (p = map1.begin(); p != map1.end(); p++)
		cout << p->first << " : " << p->second << endl;
}