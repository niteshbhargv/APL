// Nitesh Bhargava CS12M032
#include<iostream>

using namespace std;

class node{
	string data;
	node * next;
	
	public:
	string getData();
	node();	
	void setData(string);
	node* getNext();
	void setNext(node*);
};

class stackLinkedList{
	node* start;
	
	public:
	stackLinkedList();// constructor
	// various stack functions
	void push(string);
	void pop();
	void displayItems();
	void count();
	string topItem();
	void palindrome();
	
};
