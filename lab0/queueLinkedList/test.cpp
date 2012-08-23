// Nitesh Bhargava CS12M032
#include <iostream>
#include<stdio.h>
#include <string>
#include "linkedList.h"
using namespace std ;


	

int main()
{
queueLinkedList *queue = new queueLinkedList();

while(1)
{
int choice;
cout << "\nEnter your choice:\n [1] enqueue \t [2] dequeue \n [3] display \t [4] front \n [5] count \t [6] check whether strings form palindrome or not \n----------- [7] exit --------------\n";
cin >> choice;
switch(choice)
{

case (1):
{
	// push the element
	string element;
	cout << "enter the element:";
	cin >> element;
	queue->enqueue(element);

	break;
}

case (2):
{

	// pop the top element
	queue->dequeue();
	break;
}
case (3):
{
	// display the contents
	queue->displayItems();

	break; 
}

case(4): // display the front item
{
	cout <<queue->frontItem();
	
	break;
}
case(5):
{
	// count the no of the element
	queue->count();
	break;
}
case(6):
{
	queue->palindrome();
	//palindrome check
	break;
}

case(7):
{
	return 0;
}
default:
{
	cout << "bad choice\n";
	return 0;
}

}// end switch 


}// end while 

}// end main

