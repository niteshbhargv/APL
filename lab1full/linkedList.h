
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
* linkedList class:
*	@par private members:
		- start pointer
*		- peg
*	@par public members: 
*		- push(int);
*		- pop();
*	        - displayItems();
*		- count();
*		- int topItem();
*		- getPeg();
*		- move(stackLinkedList*);
*		- smove(stackLinkedList*);
*
*	@date 20/08/12
*
*
*/


#include<iostream>


using namespace std;

class node{
	private:
        int data;
        node * next;

        public:
        int getData();
        node();
        void setData(int);
        node* getNext();
        void setNext(node*);
};

class stackLinkedList{
	private:
        node* start;
	string peg;
        public:
        stackLinkedList(string);/// @constructor stackLinkedList(string)
	
        /// various stack functions
        void push(int);
        void pop();
        void displayItems();
        void count();
        int topItem();
	string getPeg();
	void move(stackLinkedList*);
	void smove(stackLinkedList*);
        
};

