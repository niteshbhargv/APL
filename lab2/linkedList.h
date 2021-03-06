/**
* @file linkedList.h
* @author Nitesh Bhargava
* @brief header file for the declaration of the node class and linkedList class
*
* node class: 
* 	@par private members:
*	-data
*	-next pointer
* 	@par public members:
*		- getData();
* 	        - node();
*	        - setData(int);
*        	- getNext();
*       	- setNext(node*);
*
* @par linkedList class:
*	@par private members:
		- start pointer
*		
*	@par public members: 
*		- push(int);
*		- pop();
*	        - displayItems();
*		- count();
*		- int topItem();
*		
*
*	@date 27/08/12
*
*
*/
#include<iostream>

using namespace std;

class node{
	int data;
	node * next;
	
	public:
	int getData();
	node();	
	void setData(int);
	node* getNext();
	void setNext(node*);
};

class queueLinkedList{
	node* start;
	
	public:
	queueLinkedList(); // constructor
	// various queue functions
	void enqueue(int);
	int dequeue();
	void displayItems();
	int count();
	int frontItem();
	void palindrome();
	void josper(int);
};
