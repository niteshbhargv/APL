/**
* @file jos.cpp
* @brief defintion file for jos.h	
* @author Nitesh Bhargava CS12M032
* @date 21/08/12
* @par approach:
* - here we remove the elements from the front and enqueue until we get the desired value and then dequeue it.
* - we continue this until our queue is empty	
*
* 
*/	
#include <iostream>
#include <string>
#include "jos.h" /// definition of jos class is being defined here
using namespace std;
void jos::joseph(int no,int jump)
{
	queueLinkedList *queue = new queueLinkedList(); /// creating the queue 
	int jmp,temp;
	temp = no;
	no = no+1;
	jmp = jump;
	/// inserting the elements in the queue
	while(temp>0)	
	{
		queue->enqueue(no-temp);
		temp--;
	}

	///Approach
	int i = jump;
	while(queue->count() !=0)
	{
		while(i>1)
		{
			queue->enqueue(queue->dequeue()); /// remove the elements from the front and enqueue until we get the desired value
			i--;	
		}
		i=jump;
		cout << queue->dequeue()<<","; /// Remove the desired element
	}

}
