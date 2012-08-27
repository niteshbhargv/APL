// Nitesh Bhargava CS12M032
#include <iostream>
#include<stdio.h>
#include <string>
#include "linkedList.h"
using namespace std ;


	

int main()
{
stackLinkedList *stack = new stackLinkedList();

while(1)
{
int choice;
cout << "\nEnter your choice:\n [1] push \t [2] pop \n [3] display \t [4] top \n [5] count \t [6] check whether strings form palindrome or not \n ------------[7] exit-------------------- ";
cin >> choice;
switch(choice)
{

case (1):
{
// push the element
string element;
cout << "enter the element:";
cin >> element;
stack->push(element);

break;
}

case (2):
{

	// pop the top element
	stack->pop();
	break;
}
case (3):
{
	// display the contents
	stack->displayItems();
//	for(int i =0; i<= top;i++)
//	cout << arr[i];
	break; 
}

case(4):
{
	cout <<stack->topItem();
	//cout << "Element: " << stack->topElement();
	break;
}
case(5):
{
	// count the no of the element
	stack->count();
	break;
}
case(6):
{
	
	//palindrome check
	stack->palindrome();
	break;
}

case(7):
{
	return 0;
}
default:
{
	cout<< "bad choice\n";
	return 0;
}

}//end switch


}//end while

}//end main

