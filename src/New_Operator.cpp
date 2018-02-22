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
    Animals cat;
    cat.setName("Freddy");
    cat.speak();

    Animals *pCat1 = new Animals();
    (*pCat1).setName("Bill");
    (*pCat1).speak();
    delete pCat1;

    return 0;
    }
