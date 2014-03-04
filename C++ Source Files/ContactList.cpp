#include "ContactList.h"
#include <iostream>
#include <string>
using namespace std;

bool lock;

// Default Constructor calls on Dictionary and AssociativeMemory constructors
ContactList::ContactList() : Dictionary(), AssociativeMemory()
{
	lock = 0;	// default is unlocked
}

// Set lock
void ContactList::setLock()
{
	lock = 1;
}

// Unset lock
void ContactList::unsetLock()
{
	lock = 0;
}

// Prints contents of ContactList
void ContactList::print()
{
	cout << nameCode << " : " << valCode << " : Lock Status (" << lock << ")" << endl;
	map<string, string>::iterator p;
	for (p = map1.begin(); p != map1.end(); p++)
		cout << p->first << " : " << p->second << endl;
}