/*
 * Stack.hpp
 *
 *  Created on: Mar 13, 2018
 *      Author: student
 */

#ifndef STACK_HPP_
#define STACK_HPP_

#include "LinkedList.hpp"

class Stack: public LinkedList {
public:
	Stack();
	virtual ~Stack();
	void push(Bagel*);
	void pop();
	Bagel* top();
};

#endif /* STACK_HPP_ */
