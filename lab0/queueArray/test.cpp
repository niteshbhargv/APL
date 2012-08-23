// Nitesh Bhargava CS12M032
#include <iostream>
#include<stdio.h>
#include <string>
#include "queue.h"
using namespace std ;

int main()
{
queueArray queue(0,0);

while(1)
{
	int choice;
	cout << "\nEnter your choice:\n [1] enqueue \t [2] dequeue \n [3] display \t [4] top \n [5] count \t [6] check whether strings form palindrome or not \n------------ [7] exit---------------- ";
cin >> choice;
switch(choice)
{

case (1):
{
	// enqueue the element
	string element;
	cout << "enter the element:";
	cin >> element;
	queue.enqueue(element);
	break;
}

case (2):
{
	
	// pop the top element
	queue.dequeue();
	break;
}
case (3):
{
	// display the contents
	queue.display();

	break; 
}

case(4):
{
	// displaying the front element
	cout << "Element: " << queue.frontElement();
	break;
}
case(5):
{
	// count the no of the element
	cout << "the number of the elements: "<<queue.count();
	break;
}
case(6):
{
	
	//palindrome check
	queue.palindrome();
	break;
}

case(7):
{	
	return 0;
}
default:
{	// user inputs other values 
	cout << "bad choice\n";
	return 0;
}

} // end switch


}// end while

}// end of main

