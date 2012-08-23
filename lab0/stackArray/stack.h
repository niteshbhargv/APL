// Nitesh Bhargava CS12M032
#include <iostream>

using namespace std;
class stackArray{
	int top;  // top element indicator
	string arr[100];

public:
	stackArray(int);
	// general stack functions
	void push(string);
	void pop();
	void display();
	int count();
	string topElement();
	void palindrome();
};
