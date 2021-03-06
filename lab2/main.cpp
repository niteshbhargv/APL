/**
* @file main.cpp
* @brief main execution file
* @mainpage The Josephus Problem
* @par Problem Definition:
*The Josephus problem is defined as follows. Suppose that there are n people arranged in a circle and that
*we are given a positive integer m ≤ n . Beginning with a designated first person, we proceed around the
*circle, removing every mth person. After removing each person, counting continues around the circle that
*remains. This process continues until all n people have been removed. The order in which the people are
*removed from the circle defines the (n, m)-Josephus permutation of the integers 1, 2, ..., n. For example, the
*(7, 3) Josephus permutation is (3, 6, 2, 7, 5, 1, 4).
*
*
* @par approach:
* - this problem can be solved using a queue implemented by link list and traverse the link list 
* - exactly n nodes (n is the given as input) save the value of the node and delete the node 
* - and do this activity until the link list is empty we now print values into output file
*
*@par Format of contents in a input file:
*	- 7, 3 $
*	- 12, 5 $
*	- 10, 1 $
*	- $$
*
*@par Format of contents of expected output for the above input file:
*	- 3, 6, 2, 7, 5, 1, 4 $
*	- 5, 10, 3, 9, 4, 12, 8, 7, 11, 2, 6, 1 $
*	- 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 $
*
*@author Nitesh Bhargava CS12M032
* @date 27/08/12
* 
*
*/

#include<iostream>
#include "jos.h" /// approach is being implemented here in the jos class
using namespace std;


int main()
{
	jos prob; /// creating the object of jos class
	int temp,jmp;
	char arr[256];
	int no,jump,i;
	cin.getline(arr,256); /// taking one line at a time
	while(arr[0]!='$')   /// if first element is '$' then we have reached the end of the file
	{
		no = 0;
		jump = 0;
		i=0;
			/// Getting the first number
			while(arr[i]>='0'&& arr[i]<='9')
			{ 
	
				no = (no +(arr[i]-'0'))*10;
				i++;
			}
			no/=10;
			/// data between two numbers (in this case ',') 
			while(arr[i]<'0'||arr[i]>'9')
				i++;

			/// Getting the second number 			
			while(arr[i]>'0'&& arr[i]<'9'){
				jump = (jump +(arr[i]-'0'))*10;
				i++;}
			/// Calling the joseph function
			if(no<=0||jump<=0){
			cout<<"bad input";
			}
			else
			prob.joseph(no,jump/10);
			cout << "$\n";
	
		cin.getline(arr,256);
		
	}
	cout << "$$";
}
	
	



