// Derived class: ContactList header file
// Subclass of both Dictionary and Associative Memory
#ifndef CONTACTLIST_H
#define CONTACTLIST_H

#include "AssociativeMemory.h"
#include "Dictionary.h"
#include <iostream>
using namespace std;

// Base classes do not need to be virtual since Dictionary and
// AssociativeMemory used a virtual Map base class.
class ContactList : public Dictionary, public AssociativeMemory
{
public:
	ContactList();
	void setLock();
	void unsetLock();
	void print();
protected:
	bool lock;
};

#endif