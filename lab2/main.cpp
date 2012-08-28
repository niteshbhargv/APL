#include<iostream>
#include "jos.h"
using namespace std;

/*void joseph(int no,int jump)
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
		while(i>1){
		queue->enqueue(queue->dequeue());
		i--;	
		}
	i=jump;
	cout << queue->dequeue()<<",";
	}
}*/
int main()
{
	jos prob;
	int temp,jmp;
	char arr[256];
	int no,jump,i;
	cin.getline(arr,256);
	while(arr[0]!='$')
	{
		no = 0;
		jump = 0;
		i=0;
	
			while(arr[i]>='0'&& arr[i]<='9'){
				no = (no +(arr[i]-'0'))*10;
				i++;}
			no/=10;

			while(arr[i]<'0'||arr[i]>'9')
				i++;
			while(arr[i]>'0'&& arr[i]<'9'){
				jump = (jump +(arr[i]-'0'))*10;
				i++;}
			prob.joseph(no,jump/10);
			cout << "$\n";
	
		cin.getline(arr,256);
		
	}
	cout << "$$";
}
	
	



