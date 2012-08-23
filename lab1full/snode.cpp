// Nitesh Bhargava CS12M032
/**	@par description: definition file for the header file "snode"
*  	@author Nitesh Bhargava 
*	@file snode.cpp
*/
#include<iostream>
#include<stdio.h>
#include "snode.h"
using namespace std;
/**
*	Constructor snode
*	@param: none	
*	sets previous node to src and past node to the none
*/
	snode::snode()
	{
		prNode = "src";
		paNode = "none";		
	}
	/**
	*function getprNode - gives the value of the previous node
	*@return value - string 
	*@param - none	
	*/

	string snode::getprNode()
	{
		return prNode;
	}
	/**
	*function getpaNode - gives the value of the past node
	*@return value - string 
	*@param - none	
	*/
	string snode::getpaNode()
	{
		return paNode;
	}
	/**
	*function setprNode - set the value of the previous node
	*@return value - void 
	*@param - string 	
	*/
	void   snode::setprNode(string n)
	{
		prNode = n;
	}
	/**
	*function setpaNode - set the value of the past node
	*@return value - void 
	*@param - string	
	*/
	void   snode::setpaNode(string w)
	{
		paNode = w;
	}
	
