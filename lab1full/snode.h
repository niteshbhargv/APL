/** @file snode.h
*@author Nitesh Bhargava CS12M032
*	@file snode.cpp
*@par description:
* header file for the declaration of the snode class - smallest disk containing members as past and present node
*
* @par node class: 
* @par	private members:
*	- previous node (prNode)
	-past node (paNode)
* @par	public members:
*	-	getprNode();
* 	-       snode();
*	-      setprNode(string);
*       -	getpaNode();
*       -	setpaNode(string);
*@date 20/08/12
*/
#include<iostream>
using namespace std;

class snode{
	private:
	string prNode;
	string paNode;
	
	public:
	snode();
	string getprNode();
	string getpaNode();
	void setprNode(string);
	void setpaNode(string);
};

