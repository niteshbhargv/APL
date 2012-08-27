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
#include <fstream>
using namespace std;
int main()
{
ofstream outstream;
outstream.open("output.txt");
char a = 1;
char b = 2;
int ab = int(a);
int ba = int(b);
int abba = 10*ab+ba;
cout << abba;
ifstream instream ("input.txt");
string line;
if(instream.is_open())
{
	while(instream.good())
	{
		getline(instream,line);
		for(size_t i=0; i<line.length(); i++)				
		outstream<<endl<<line.at(i);
		// convert string to intger
		// or 
		//implement a stack here which will take the number from push(line.at(i))
 		// to generate the no we will be popping the items and multiplying it with the number 
		// i
	}
	instream.close();
}
outstream.close();


return 0;
}
