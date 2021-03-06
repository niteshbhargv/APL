// Nitesh Bhargava CS12M032
#include <iostream>
#include "linkedList.h"
#include<algorithm> // used for the string reversal
using namespace std;



node::node(){
	
}

void node::setData(string a)
{
	data  = a;  // sets data of node a value equal to a
}

string node::getData()
{
	return data;// return the data the respective node 
}

void node::setNext(node* a)
{
	next=a;
}

node* node::getNext()
{
	return next;
}

	
void stackLinkedList::push(string a) 
{
	node *n = new node();
	n->setData(a);
	n->setNext(start->getNext());
	start->setNext(n);
		
	
}
stackLinkedList::stackLinkedList() // constructor
{
	node * n = new node();
	start = n;
	start->setNext(NULL);
	start->setData("");
}
void stackLinkedList::pop()
{
	if(start->getNext()!=NULL)
	{
	node * temp = new node();
	temp = start->getNext();
	cout <<"item" <<temp-> getData();
	start->setNext(start->getNext()->getNext());		
	}
	else 
	cout <<"stack empty";
}
void stackLinkedList::displayItems()
{
	node * temp = new node();
	temp = start;
	while(temp!=NULL)			// while loop applied to display the items of the stack
	{					// "temp == null" at the link list 
		cout << temp-> getData();	// getData will return the data portion
		temp = temp->getNext();
	} 
}
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

string stackLinkedList::topItem()
{
	if(start->getNext()!=NULL)
	{
	node* temp = new node();
	temp = start;
	return temp->getNext()->getData();
	}
	else 
	return "stack empty";
}

void stackLinkedList::palindrome()
{
	string forward = "";
	node * temp = new node();
	// getting the forward string
	temp = start->getNext();
	if(temp!=NULL)
	{
		while(temp!=NULL)	
		{
			forward = forward + temp-> getData();
			temp = temp->getNext();
		} 
	}
	else{
	cout << "list empty\t";
	
	}
	cout << "forward:" << forward;
	string backward = "";
	backward = forward;
	reverse(backward.begin(),backward.end());  // reverses the string and stores it in the string itself
	cout << "\tbackward:"<<backward;
	if(forward!=""){	
	if(forward.compare(backward)!=0 )  // compares two strings
	{
		cout <<"\nit is not a palindrome";
	}	
	else
		cout<<"\nyes it is a palindrome";
	
	}
	
}
