// Nitesh Bhargava cs12m032
#include <iostream>
#include "linkedList.h"
#include <string>
#include <algorithm> // used for the string reversal
using namespace std;



node::node(){
	
}

void node::setData(string a)
{
	data  = a;
}

string node::getData()
{
	return data;
}

void node::setNext(node* a)
{
	next=a;
}

node* node::getNext()
{
	return next;
}

	
void queueLinkedList::enqueue(string a)
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
queueLinkedList::queueLinkedList()
{
	node * n = new node();
	start = n;
	start->setNext(NULL);
	start->setData("");
}
void queueLinkedList::dequeue()
{
	node * temp = new node();
	temp = start->getNext();	
	if(temp !=NULL){
	cout <<"item:" <<temp-> getData();
	start->setNext(start->getNext()->getNext());}
	else
	cout << "list empty";		
}
void queueLinkedList::displayItems()
{
	node * temp = new node();
	temp = start->getNext();
	if(temp!=NULL){
	while(temp!=NULL)	
	{
		cout <<"\t";
		cout << temp-> getData();
		temp = temp->getNext();
	} }
	else
	cout << "list empty";
}
void queueLinkedList::count()
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

string queueLinkedList::frontItem()
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
	
void queueLinkedList::palindrome()
{
	string forward = "";
	node * temp = new node();
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
