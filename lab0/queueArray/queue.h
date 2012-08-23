// Nitesh Bhargava CS12M032
#include <iostream>

using namespace std;
class queueArray{
	int tail; // front element indicator
	int head; // rear element indicator
	string arr[100]; 

public:
	queueArray(int,int);
	void enqueue(string);
	void dequeue();
	void display();
	int count();
	string frontElement();
	void palindrome();
};
