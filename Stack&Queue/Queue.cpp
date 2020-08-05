/*
 * Queue.cpp
 *
 *  Created on: Mar 13, 2018
 *      Author: student
 */

#include "Queue.hpp"

Queue::Queue() {
	// TODO Auto-generated constructor stub

}

Queue::~Queue() {
	// TODO Auto-generated destructor stub
}
void Queue::enqueue(Bagel*BagelQueue)
{
	this->push_back(BagelQueue);
}
void Queue::dequeue()
{
	this->pop_front();
}
Bagel* Queue::front()
{
	return this->first();
}
