#include "Dictionary.h"
#include <map>
#include <iostream>
#include <string>
using namespace std;

string nameCode;

// Default Constructor
Dictionary::Dictionary() : Map()
{
	nameCode = "Names";
}

// Returns the value corresponding to a key
string Dictionary::getVal(string key)
{
	// find(key) returns the pointer for the element with that key
	p = map1.find(key);
	if (p == map1.end()) return "Name not found";
	else return p->second;
}

// Prints the contents of the Dictionary
void Dictionary::print()
{
	cout << nameCode << " : Values" << endl;
	for (p = map1.begin(); p != map1.end(); p++)
		cout << p->first << " : " << p->second << endl;
}