// Nitesh Bhargava CS12M032
#include <iostream>
#include<stdio.h>
#include <string>
#include "queue.h"    // definition being declared here
#include <algorithm> // string compare
using namespace std ;

queueArray::queueArray(int a, int b)  // constructor
{
	head = a;
	tail = b;
}
void queueArray::enqueue(string a)  
{
	// enqueue an element at the rear (circular queue)
	if((head-tail)!=1)
	{	
	arr[tail] = a;
        cout << arr[tail];
	if(tail==99)  // array reached at the end
	tail = 0;
	else
	tail++;
	}
	else 
	cout << "queue full";
	
}

void queueArray::dequeue()
{
	// dequeue an element at the front (circular queue)
	if(head!=tail){	
	arr[head] = "";
	if(head==99) //array reached at the end
	head = 0; 
	else
	head = head+1;}
	else
	cout <<"queue empty";
}
void queueArray::display()
{
	if(head<tail){  // normal instance of queue
	for(int i=head; i<=tail;i++)
	{
		cout<<arr[i]<<"\n";	
	}
}

	else // when tail is behind the head
	{
		for(int i=head;i<=99;i++)
		{
		cout<<arr[i]<<"\n";
	}
		for(int i=0;i<=tail;i++)
		{
		cout<<arr[i]<<"\n";
		}

	
	}
}
string queueArray::frontElement()
{
	if(tail!=head)
	return arr[head];	
	else
	return "array empty";
}

int queueArray::count()
{
	return tail-head;	
}

void queueArray::palindrome()
{	
	string forward = "";
	if(head<tail)
	{
		for(int i=head; i<=tail;i++)
		{
			forward =forward+arr[i];	
		}
		cout << "forward:"<<forward;
	}
	cout <<"\tbackward:";
	string backward = "";
	backward = forward;
	reverse(backward.begin(),backward.end());  // reverses the string and stores it in the string itself
	cout << backward;	
	if(forward.compare(backward)!=0)
	{
		cout <<"\nit is not a palindrome";
	}	
	else
		cout<<"\nyes it is a palindrome";		
		
}	


