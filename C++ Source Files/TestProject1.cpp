/*-----------------------------------------------------------------------------
* Author:		Faith-Anne Kocadag
* Written:		2/14/2013
*
* An example of multiple and repeated inheritance in C++ that avoids the
* "Deadly Diamond of Derivation" problem through the use of virtual base
* classes and virtual functions.
*----------------------------------------------------------------------------*/

#include <iostream>
#include <sstream>
#include<time.h>
#include <map>
#include "Map.h"
#include "Dictionary.h"
#include "AssociativeMemory.h"
#include "ContactList.h"
using namespace std;

/* Generate random phone numbers to fill the maps */
string generateNumber()
{
	stringstream ss2;
	int number1 = rand() % 89999 + 10000;	// Generates a random 10 digit
	int number2 = rand() % 89999 + 10000;	// number, 5 digits at a time
	ss2 << number1;
	ss2 << number2;
	return ss2.str();						// Converts stringstream to string
}

int main()
{
	srand (time(0));						// Seed random
	stringstream ss1;
	
	Map myMap;
	for (int i = 0; i < 5; i++)				// Fill myMap
	{
		ss1.str(std::string());				// Clear ss
		ss1 << (char)(i + 65);
		myMap.insert(ss1.str(), generateNumber());
	}

	Dictionary myDictionary;
	for (int i = 0; i < 5; i++)				// Fill myDictionary
	{
		ss1.str(std::string());				// Clear ss
		ss1 << (char)(i + 65);
		myDictionary.insert(ss1.str(), generateNumber());
	}

	AssociativeMemory myMemory;
	for (int i = 0; i < 5; i++)				// Fill myMemory
	{
		ss1.str(std::string());				// Clear ss
		ss1 << (char)(i + 65);
		myMemory.insert(ss1.str(), generateNumber());
	}

	ContactList myContacts;	
	for (int i = 0; i < 5; i++)				// Fill myContacts
	{
		ss1.str(std::string());				// Clear ss
		ss1 << (char)(i + 65);
		myContacts.insert(ss1.str(), generateNumber());
	}

	Map *array[4];							// Create array of Supertype Map
	array[0] = &myMap;
	array[1] = &myDictionary;
	array[2] = &myMemory;
	array[3] = &myContacts;

	for (int i = 0; i < 4; i++)
	{
		array[i] -> print();				// Polymorphic print() calls
		cout << endl;
	}

	system("PAUSE");						// Pauses the console window, so it
	return 0;								// doesn't immediately close when
}											// run as an exe file