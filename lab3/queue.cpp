// Nitesh Bhargava cs12m032
#include <iostream>
#include "linkedList.h"
#include <string>

using namespace std;



node::node(){
	
}

void node::setExp(int a)
{
	exp  = a;
}

int node::getExp()
{
	return exp;
}
void node::setCoef(int a)
{
 	coef  = a;
}

int node::getCoef()
{
	return coef;
}
void node::setNext(node* a)
{
	next=a;
}

node* node::getNext()
{
	return next;
}

	
void linkedList::enqueue(string a)
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
linkedList::linkedList()
{
	node * n = new node();
	start = n;
	start->setNext(NULL);
	start->setData("");
}
void linkedList::dequeue()
{
	node * temp = new node();
	temp = start->getNext();	
	if(temp !=NULL){
	cout <<"item:" <<temp-> getData();
	start->setNext(start->getNext()->getNext());}
	else
	cout << "list empty";		
}
void linkedList::displayItems()
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
void linkedList::count()
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

string linkedList::frontItem()
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
	

