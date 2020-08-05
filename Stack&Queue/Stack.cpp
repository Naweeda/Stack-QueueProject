/*
 * Stack.cpp
 *
 *  Created on: Mar 13, 2018
 *      Author: student
 */

#include "Stack.hpp"

Stack::Stack() {
	// TODO Auto-generated constructor stub

}

Stack::~Stack() {
	// TODO Auto-generated destructor stub
}
void Stack::push(Bagel*bagelStack)
{
	this->push_back(bagelStack);
}
void Stack::pop()
{
	this->pop_back();
}
Bagel* Stack::top()
{
	return this->last();
}

