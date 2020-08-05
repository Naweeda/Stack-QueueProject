/*
 * Queue.hpp
 *
 *  Created on: Mar 13, 2018
 *      Author: student
 */

#ifndef QUEUE_HPP_
#define QUEUE_HPP_

#include "LinkedList.hpp"

class Queue: public LinkedList {
public:
	Queue();
	virtual ~Queue();
	void enqueue(Bagel*);
	void dequeue();
	Bagel* front();
};

#endif /* QUEUE_HPP_ */
