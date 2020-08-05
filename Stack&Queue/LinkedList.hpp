/*
 * LinkedList.hpp
 *
 *  Created on: Feb 5, 2018
 *      Author: Naweeda
 */

#ifndef LINKEDLIST_HPP_
#define LINKEDLIST_HPP_

#include "Bagel.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

struct ListNode
{
	Bagel *data;
	ListNode *next;
};

class LinkedList {
public:

	void push_front(Bagel *aBagel);
	void print_list();
	void pop_front();
	void pop_back();
	Bagel* first();
	Bagel* last();
	Bagel* getAt(int);
	Bagel*  operator[](int num);
	void insertAt(int, Bagel*);
	void deleteAt(int num);
	void insertSorted(Bagel*);
	int size(void);
	void push_back(Bagel *aBagel);
	void delete_list(void);
	ListNode* FindLastNode(ListNode *tempHead);
	int CountInventory(ListNode *tempHead);
	void PrintListR(ListNode *tempNode);
	ListNode* getHead(void);

	LinkedList();
	virtual ~LinkedList();


private:
	ListNode *head;
};

#endif /* LINKEDLIST_HPP_ */
