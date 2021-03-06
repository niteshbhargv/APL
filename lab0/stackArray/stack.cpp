// Nitesh Bhargava cs12m032
#include <iostream>
#include<stdio.h>
#include <string>
#include "stack.h"
#include <algorithm>// used for reversing the string
using namespace std ;


stackArray::stackArray(int a)
{
	top = a;
}
void stackArray::push(string a)
{
	top++;
	arr[top] = a;
	cout << arr[top];
}

void stackArray::pop()
{

	arr[top] = "";
	top--; 
	
}
void stackArray::display()
{
	for(int i=top; i>=0;i--)
	{
		cout<<arr[i]<<"\n";	
	}
}
string stackArray::topElement()
{
	if(top>=0)
	return arr[top];	
	else
	return "array empty";
}

int stackArray::count()
{
	return top+1; // return the number of the elements in the stack
}
void stackArray::palindrome()
{
	string forward = "";
	for(int i=top; i>=0;i--)
	{
	 	forward = forward+arr[i];	
	}
	cout << "forward:"<<forward;
	string backward ="";
	backward = forward;
	reverse(backward.begin(),backward.end()); // reverses the string
	cout <<	"\tbackward:"<<backward;
	if(forward.compare(backward)!=0)
	{
		cout <<"\nit is not a palindrome";
	}	
	else
		cout<<"\nyes it is a palindrome";		
		
}

