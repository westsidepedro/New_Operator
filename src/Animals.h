/*
 * Animals.h
 *
 *  Created on: Feb 22, 2018
 *      Author: jpetterson
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_
#include <iostream>
using namespace std;

class Animals
    {
    private:
	string name;

    public:

	Animals();
	Animals(const Animals &other);
	~Animals();
	void setName(string inputName);
	void speak() const;

    };

#endif /* ANIMALS_H_ */
