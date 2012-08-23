/** 	@author Nitesh Bhargava 
*@par description: definition file for the header file "LinkedList"
*	@file snode.cpp
*/
#include <iostream>
#include "linkedList.h"

#include<algorithm> // used for the int reversal
using namespace std;


/////////////////////////////////////node class///////////////////////////////////////////////
node::node(){
	
}
/**
	*function setData - sets data of node a value equal to a
	*@return value - void 
	*@param - int	
	*/

void node::setData(int a)
{
	data  = a;  // sets data of node a value equal to a
}
/**
	*function getData - gets data of node 
	*@return value - int
	*@param - none	
	*/

int node::getData()
{
	return data;// return the data the respective node 
}

/**
	*function setNext - sets next pointer of node a value equal to a
	*@return value - void 
	*@param - node*	
	*/

void node::setNext(node* a)
{
	next=a;
}
/**
	*function getData - gets next pointer of node 
	*@return value - node*
	*@param - none	
	*/


node* node::getNext()
{
	return next;
}
///////////////////////////////////stackLinkedList/////////////////////////////////////

/**
	*function push - push an element into the stack
	*@return value - void 
	*@param - int
	*/

void stackLinkedList::push(int a) 
{
	node *n = new node();
	n->setData(a);
	n->setNext(start->getNext());
	start->setNext(n);
		
	
}
/**
*	constructor set data to -1 and start to NULL
	
*/
stackLinkedList::stackLinkedList(string a) // constructor
{
	peg = a;
	node * n = new node();
	start = n;
	start->setNext(NULL);
	start->setData(-1);
	
}
/**
*	function pop - pop an element from the stack
*	@return value - void 
*	@param none
*/

void stackLinkedList::pop()
{
	if(start->getNext()!=NULL)
	{
	node * temp = new node();
	temp = start->getNext();
	cout <<"popped item:" <<temp-> getData()<<"\n";
	start->setNext(start->getNext()->getNext());		
	}
	else 
	cout <<"stack empty";
}
/**
	display the items of the stack
*/
void stackLinkedList::displayItems()
{
	node * temp = new node();
	temp = start->getNext();
	while(temp!=NULL)			// while loop applied to display the items of the stack
	{					// "temp == null" at the link list 
		cout << temp-> getData()<<"\n";	// getData will return the data portion
		
		temp = temp->getNext();
	} 
}
/**
*	counts the number of the elements of the stack 
*/
void stackLinkedList::count()
{
	node * temp = new node();
	temp = start->getNext();
	int i = 0 ;
	while(temp!=NULL)	
	{
		i++;
		temp = temp->getNext();
	} 
	cout<<i;
}
/**
	*function topItem - returns the top element from the stack
	*@return value - int 
	@param - none
*/
int stackLinkedList::topItem()
{
	if(start->getNext()!=NULL)
	{
	node* temp = new node();
	temp = start;
	return temp->getNext()->getData();
	}
	else 
	{
	//cout<< "stack empty";
	return 100;
	}

}
/// getter funtion for the peg (private member)
string stackLinkedList::getPeg()
{
	return peg;
}
/**
	*function move - pop an element from the parent stack and pushes it into stack whose pointer is passed as a parameter 
	*@return value - void 
	*@param stackLinkedList 
*/
void stackLinkedList::move(stackLinkedList* a)
{
	a->push(topItem());
	pop();
	cout<<getPeg()<<"->"<<a->getPeg()<<"\n";	
}
/**
	*function smove - pop an element from the parent stack and pushes it into stack whose pointer is passed as a parameter 
	*@return value - void 
	*@param - stackLinkedList 
*/
void stackLinkedList::smove(stackLinkedList* a)
{
	a->push(topItem());
	pop();
	
	cout<<"move:"<<getPeg()<<"->"<<a->getPeg()<<"\n";	
}

