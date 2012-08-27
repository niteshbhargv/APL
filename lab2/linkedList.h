// Nitesh Bhargava CS12M032
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
