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

class queueLinkedList{
	node* start;
	
	public:
	queueLinkedList(); // constructor
	// various queue functions
	void enqueue(string);
	void dequeue();
	void displayItems();
	void count();
	string frontItem();
	void palindrome();
};
