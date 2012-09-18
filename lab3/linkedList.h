// Nitesh Bhargava CS12M032
#include<iostream>

using namespace std;

class node{
	int coef;
	int exp;
	node * next;
	
	public:
	int getExp();
	void setExp(int);
	int getCoef();
	node();	
	void setCoef(int);
	node* getNext();
	void setNext(node*);
};

class linkedList{
	node* start;
	
	public:
	linkedList(); // constructor
	// various queue functions
	void enqueue(string);
	void dequeue();
	void displayItems();
	void count();
	string frontItem();
	
};
