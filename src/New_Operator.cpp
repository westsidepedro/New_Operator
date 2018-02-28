//============================================================================
// Name        : New_Operator.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Animals.h"
using namespace std;

int main()
    {
    Animals cat;			// what we've done in that past
    cat.setName("Freddy");
    cat.speak();

    Animals *pCat1 = new Animals();
    (*pCat1).setName("Bill");	// can't call 'setName' on pointer UNLESS we use (*__)
    (*pCat1).speak();		// b/c the '.' has higher president than '*'
    delete pCat1;		// will do the .__() BEFORE dereferencing the pCat1

    // OR //

    Animals *pCat2 = new Animals();
    pCat2->setName("Joe");
    pCat2->speak();
    delete pCat2;		// MUST use 'delete' when 'new' is used
				// to deallocate the mem used,

    return 0;
    }			// destructor runs memory is dealocated
