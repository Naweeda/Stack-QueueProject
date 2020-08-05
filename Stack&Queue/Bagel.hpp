/*
 * Bagel.hpp
 *
 *  Created on: Mar 2, 2018
 *      Author: Naweeda
 */

#ifndef BAGEL_HPP_
#define BAGEL_HPP_
#include <iostream>
using namespace std;

class Bagel {
private:
	string Flavor;
	int OnHand;
	double Cost;
	double Price;


public:
	Bagel();
	virtual ~Bagel();
	void setFlavor(string);
	void setOnHand(int);
	void setCost(double);
	void setPrice(double);
	string getFlavor();
	int getOnHand();
	double getCost();
	double getPrice();

};

#endif /* BAGEL_HPP_ */
