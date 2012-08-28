/**
* @author Nitesh Bhargava CS12M032
* @date 21/08/12
* @mainpage: The Josephus problem
* @par approach:
* - this problem can be solved using a circular link list and traverse the link list 
* - exactly n nodes (n is the given as input) save the value of the node and delete the node
* - and do this activity until the link list is empty we now print values into otput file
*
*/	
#include <iostream>
#include <string>
#include "jos.h"
using namespace std;
void jos::joseph(int no,int jump)
{
	queueLinkedList *queue = new queueLinkedList();
	// jospert(int no,int jump)
	int jmp,temp;
	temp = no;
	no = no+1;
	jmp = jump;
	// inserting the elements in the queue
	while(temp>0)	
	{
		queue->enqueue(no-temp);
		temp--;
	}
	// joseph permutation
	int i = jump;
	while(queue->count() !=0)
	{
		while(i>1)
		{
			queue->enqueue(queue->dequeue());
			i--;	
		}
		i=jump;
		cout << queue->dequeue()<<",";
	}

}
