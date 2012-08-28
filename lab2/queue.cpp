// Nitesh Bhargava cs12m032
#include <iostream>
#include "linkedList.h"
#include <string>
#include <algorithm> // used for the int reversal
using namespace std;



node::node(){
	
}

void node::setData(int a)
{
	data  = a;
}

int node::getData()
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
queueLinkedList::queueLinkedList()
{
	node * n = new node();
	start = n;
	start->setNext(NULL);
	start->setData(-1);
}
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
	
void queueLinkedList::josper(int jump)
{
	node * tmp = new node();
	int jmp = jump;
	tmp = start->getNext();
	int i;
	while(tmp!=NULL)
	{
		while(jmp>1)
		{
			tmp = tmp->getNext();
			jmp--;
			cout <<dequeue();
			//cout <<i;
			//enqueue(dequeue());
			
			
		}
		cout <<dequeue();
		jmp = jump;
		tmp = tmp->getNext();
		
	}
}

