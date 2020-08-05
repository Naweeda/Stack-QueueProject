//============================================================================
// Name        : LinkedListProject1.cpp
// Author      : Naweeda
// Version     : Windows
// Copyright   : Your copyright notice
// Description : LinkedList With Different Functions
//============================================================================

#include <iostream>
#include "LinkedList.hpp"
#include "Bagel.hpp"
#include "Queue.hpp"
#include "Stack.hpp"
#include "iomanip"
using namespace std;

int main() {
	Stack theStack;
	Queue theQueue;

	Bagel *theBagel = new Bagel;
	theBagel->setFlavor( "Choclate");
	theBagel->setOnHand(66);
	theBagel->setCost(1.25);
	theBagel->setPrice(0.85);
	theStack.push(theBagel);

	theBagel = new Bagel;
	theBagel->setFlavor("Pumpkin");
	theBagel->setOnHand(55);
	theBagel->setCost(5.44);
	theBagel->setPrice(1.22);
	theStack.push(theBagel);

	theBagel = new Bagel;
	theBagel->setFlavor("Plain");
	theBagel->setOnHand(44);
	theBagel->setCost(4.33);
	theBagel->setPrice(1.55);
	theStack.push(theBagel);

	theBagel = new Bagel;
	theBagel->setFlavor("Cinnomen Raisin");
	theBagel->setOnHand(33);
	theBagel->setCost(3.33);
	theBagel->setPrice(1.66);
	theStack.push(theBagel);


	cout << "Testing the Bagel's Cost with stack" << endl;
	int stackSize = theStack.size();
	for(int i = 0; i < stackSize; i++)
	{
		theBagel = theStack.top();
		cout << theBagel->getCost()<< endl;
		delete theBagel;
		theStack.pop();
	}

	Bagel *myBagel = new Bagel;
	myBagel->setFlavor( "Choclate");
	myBagel->setOnHand(66);
	myBagel->setCost(1.25);
	myBagel->setPrice(0.85);
	theQueue.enqueue(myBagel);

	myBagel = new Bagel;
	myBagel->setFlavor("Pumpkin");
	myBagel->setOnHand(55);
	myBagel->setCost(5.44);
	myBagel->setPrice(1.22);
	theQueue.enqueue(myBagel);

	myBagel = new Bagel;
	myBagel->setFlavor("Plain");
	myBagel->setOnHand(44);
	myBagel->setCost(4.33);
	myBagel->setPrice(1.55);
	theQueue.enqueue(myBagel);

	myBagel = new Bagel;
	myBagel->setFlavor("Cinnomen Raisin");
	myBagel->setOnHand(33);
	myBagel->setCost(3.33);
	myBagel->setPrice(1.66);
	theQueue.enqueue(myBagel);

	cout << "Now testing the Bagel's Cost with Queue" << endl;
	int StackSize = theQueue.size();
	for(int i = 0; i < StackSize; i++)
	{
		theBagel = theQueue.front();
		cout << theBagel->getCost()<< endl;
		delete theBagel;
		theQueue.pop_front();
	}



cout << "Program ending" << endl;
}//main
