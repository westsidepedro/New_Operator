/*
 * Animals.cpp
 *
 *  Created on: Feb 22, 2018
 *      Author: jpetterson
 */

#include "Animals.h"
#include <iostream>
using namespace std;

Animals::Animals()
    {
    cout << "Animal created." << endl;
    }

Animals::Animals(const Animals &other) :
	name(other.name)
    {
    cout << "Animal created by copying." << endl;
    }

Animals::~Animals()
    {
    cout << "Destructor called." << endl;
    }

void Animals::setName(string inputName)
    {
    this->name = inputName;
    }

void Animals::speak() const
    {
    cout << "Hi, my name is " << name << endl;
    }
