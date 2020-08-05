/*
 * LinkedList.cpp
 *
 *  Created on: Feb 5, 2018
 *      Author: Naweeda
 */

#include <iostream>
using namespace std;
#include "LinkedList.hpp"
#include "Bagel.hpp"



// Functions that dont need For Recursive
void LinkedList::push_front(Bagel *aBagel)
{
	if(head==nullptr)
	{
		head = new ListNode;
		head->data = aBagel;
		head->next = nullptr;
	}
	else
	{
		ListNode *nodePtr = new ListNode;
		nodePtr->data = aBagel;
		nodePtr->next = head;

		head = nodePtr;
	}
}
void LinkedList::print_list()
{
	if(head != nullptr)
	{
		ListNode *value = head;
		while (value != nullptr)
		{
			cout << value->data << endl;
			value = value->next;
		}
	}
		else
		{
			cout << "No Linked List " << endl;
		}
}

void LinkedList::pop_front()
{
	if(head == nullptr)
	{
		cout << "No list" << endl;
	}
	else
	{
		ListNode* aNode = head->next;
		delete head;
		head = aNode;
		aNode = nullptr;
	}
}
void LinkedList::pop_back()
{
	if(head->next == nullptr)
	{
		delete head;
	}
	else if(head != nullptr)
	{
		ListNode *tempNode = head;
		ListNode *tempHead;
		while (tempNode->next != nullptr)
		{
			tempHead = tempNode;
			tempNode = tempNode->next;
		}
		delete tempNode;
		tempHead->next = nullptr;
	}
	else
	{
		cout << "No list" << endl;
	}
}
Bagel* LinkedList::first()
{
	if(head == nullptr)
	{
		throw "There is no data in the list ";
		return 0;
	}
	else
	{
		return head->data;///Throw a c string
	}
}
Bagel* LinkedList::last()
{
	if(head == nullptr)
	{
		throw "There is no data in the list";
		return 0;
	}
	else
	{
		ListNode *headPtr = head;
		while(headPtr->next != nullptr)
		{
			headPtr = headPtr->next;
		}
		return headPtr->data;
	}
}
Bagel* LinkedList::getAt(int num)
{
	int a = 0;
	ListNode * aHead = head;
	if(head == nullptr)
	{
		cout << "No List" << endl;
	}
	else if(num > size())
	{
		throw "Error: Doesn't exist in the Linked List.";
	}
	else
	{
	while (a < size() && a < num)
	{
		aHead = aHead->next;
		a++;
	}
}
	return aHead->data;

}
Bagel* LinkedList::operator[](int num)
{
	if(num > size())
	{
		throw "Too high";
	}
	else
	{
		return getAt(num);
	}
}
void LinkedList::insertAt(int node, Bagel *aBagel)
{
	if(head == nullptr)
	{
		throw "Error, cannot insert.";
	}
	else if(node >= this->size())
	{
		throw "Error, the number is outside the list.";
	}
	else if(aBagel < 0)
	{
		throw "Error, lower than zero, cannot insert.";
	}
	else if (aBagel== 0)
	{
		this->push_front(aBagel);
	}
	else if(node == this->size() -1)
	{
		this->push_back(aBagel);
	}
	else
	{

		ListNode* temp = nullptr;
		ListNode *current = head;
		int counter = 1;

		while(current != nullptr && counter < node)
		{
			temp = current;
			current = current->next;
			counter++;
		}
		if(current != nullptr)
		{
			ListNode* tempNode = new ListNode();
			tempNode->data = aBagel;

			if (temp != nullptr)
			{
				temp->next = current;

			}
		else
		{
			temp = temp->next;
			temp->next = current;

		}
			temp->next = tempNode;
			tempNode->next = current;
		}
	}
}

void LinkedList::deleteAt(int num)
{
	if(head == nullptr)
	{
		throw "Error: there is nothing in the list, can't delete.";
		return;
	}
	else if(num < 0)
	{
		throw "Error: The num is less than zero.";
	}
	else if (num == 0)
	{
		pop_front();
	}
	else if (num == size()-1)
	{
		pop_back();
	}
	else if (num >= size())
	{
		throw "Error, doesn't exist.";
	}
	else
	{
		ListNode* temp = nullptr;
		ListNode* current = head;
		int x = 0;
		while(x < num && current != nullptr)
		{
			temp = current;
			current = current->next;
			x++;
		}
		if(current != nullptr)
		{
			temp->next = current->next;
			delete current;
			current = nullptr;
		}
		else
		{
			pop_back();
		}
	}
}
void LinkedList::insertSorted(Bagel* aBagel)
{
	if(head == nullptr)
	{
		throw "There are no nodes to sort, try to add some node first.";
	}
	else
	{
		this->push_back(aBagel);
		ListNode *prev = head;
		ListNode *curr = head;

		for(curr = head; curr != nullptr; curr = curr->next)
		{

			for(prev = head; prev != nullptr; prev = prev->next)
			{
			if(prev->data > curr->data)
			{

				prev->data = curr->data;
				curr->data = aBagel;
			}
			}
		}
	}
}
int LinkedList::size(void)
{
	int counter = 0;

	ListNode * current = head;
	while(current!=nullptr)
	{
		current = current->next;
		counter++;
	}

	return counter;

}
ListNode* LinkedList::getHead(void)
{
	return this->head;
}
void LinkedList::push_back(Bagel *aBagel)
{

	if(head== nullptr)
	{
		head = new ListNode;
		head->data = aBagel;
		head->next = nullptr;
	}
	else
	{
	    ListNode *nodePtr = head;

	    nodePtr = this->FindLastNode(this->head);

		nodePtr->next = new ListNode;
		nodePtr->next->data = aBagel;
		nodePtr->next->next = nullptr;

	}
}
void LinkedList::delete_list(void)
{
	ListNode * aNode;

	while (aNode != nullptr)
	{
		aNode = aNode->next;
		delete head->data;
		delete head;
		head = aNode;
	}
}

ListNode* LinkedList::FindLastNode(ListNode* tempHead)
{
	if(tempHead == nullptr)
	{
		return nullptr;
	}
	else
	{
		if(tempHead->next ==nullptr)
		{
			return tempHead;
		}
		else
		{
			return FindLastNode(tempHead->next);
		}
	}
}
int LinkedList::CountInventory(ListNode*tempHead)
{
	if(tempHead ==nullptr)
	{
		return 0;
	}
	else
	{
		if(tempHead->next == nullptr)
		{
			return tempHead->data->getOnHand();
		}
		else
		{
			int bagelTemp = (tempHead->data)->getOnHand();
			return CountInventory(tempHead->next) + bagelTemp;
		}
	}

}
void LinkedList::PrintListR(ListNode* tempNode)
{

	if(tempNode == nullptr)
	{
		return;
	}
	else
	{
		cout << left << setw(16) << (tempNode->data)->getFlavor()
				<< setw(19)<< (tempNode->data)->getOnHand()
				<< setw(14) << (tempNode->data)->getCost()
		        << setw(12) << (tempNode->data)->getPrice();

		PrintListR(tempNode->next);
	}
}
LinkedList::LinkedList() {
	// TODO Auto-generated constructor stub
	head = nullptr;

}

LinkedList::~LinkedList() {
	LinkedList::delete_list();

}
