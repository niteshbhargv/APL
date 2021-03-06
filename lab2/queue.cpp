/** 	
* @file queue.cpp
* @author Nitesh Bhargava 
* @brief defintion file for the queue.h
* @par description: definition file for the header file "LinkedList"
*	
*/
#include <iostream>
#include "linkedList.h"
#include <string>
#include <algorithm> // used for the int reversal
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
	data  = a;// sets data of node a value equal to a
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
///////////////////////////////////queueLinkedList/////////////////////////////////////

/**
	*function enqueue - enqueue an element into the queue
	*@return value - void 
	*@param - int
	*/
	
void queueLinkedList::enqueue(int a)
{
	node *n = new node(); // defining a temp node for the traversal of the link list
 	n->setData(a);
	n->setNext(NULL);
	node* temp = start;
	while(temp->getNext()!=NULL)
	{
		temp = temp->getNext();
	}
	temp->setNext(n);
		
	
}
/**
*	constructor set data to -1 and start to NULL
	
*/
queueLinkedList::queueLinkedList()
{
	node * n = new node();
	start = n;
	start->setNext(NULL);
	start->setData(-1);
}
/**
	*function dequeue - dequeue an element from the queue
	*@return value - int 
	*@param - none
	*/
int queueLinkedList::dequeue()
{
	node * temp = new node();
	temp = start->getNext();	
	if(temp !=NULL){
	//cout <<"item:" <<temp-> getData();
	start->setNext(start->getNext()->getNext());
	return temp->getData();	
	}
	else
	cout << "list empty";	
	return -1;
}
/**
	display the items of the queue
*/
void queueLinkedList::displayItems()
{
	node * temp = new node();
	temp = start->getNext();
	if(temp!=NULL){
	while(temp!=NULL)	// while loop applied to display the items of the queue
	{
		cout <<"\t";
		cout << temp-> getData();// "temp == null" at the link list 
		temp = temp->getNext();// getData will return the data portion
		
	} }
	else
	cout << "list empty";
}
/**
*	counts the number of the elements of the stack 
*/
int queueLinkedList::count()
{
	node * temp = new node();
	temp = start->getNext();
	int i = 0 ;
	while(temp!=NULL)	
	{
		i++;
		temp = temp->getNext();
	} 
	return i;
}
/**
	*function topItem - returns the front element from the queue
	*@return value - int 
	@param - none
*/
int queueLinkedList::frontItem()
{
	node* temp = new node();
	if(start->getNext()==NULL){
	cout <<"queue empty";
	}
	else
	temp = start->getNext();
	if(temp!=NULL&& start!=NULL)
	return temp->getData();
	else
	cout<<"queue empty";	
}
	


