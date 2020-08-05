/*
 * Bagel.cpp
 *
 *  Created on: Mar 2, 2018
 *      Author: Naweeda
 */

#include "Bagel.hpp"

Bagel::Bagel() {
	// TODO Auto-generated constructor stub
	Flavor = "";
	OnHand = 0;
	Cost = 0.0;
	Price = 0.0;

}

Bagel::~Bagel() {
	// TODO Auto-generated destructor stub
}
void Bagel::setFlavor(string f)
{
	Flavor = f;
}
void Bagel::setOnHand(int x)
{
	OnHand = x;
}
void Bagel::setCost(double c)
{
	Cost = c;
}
void Bagel::setPrice(double p)
{
	Price = p;
}
string Bagel::getFlavor()
{
	return Flavor;
}
int Bagel::getOnHand()
{
	return OnHand;
}
double Bagel::getCost()
{
	return Cost;
}
double Bagel::getPrice()
{
	return Price;
}

