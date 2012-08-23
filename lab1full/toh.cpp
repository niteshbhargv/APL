/**
*	@mainpage tower of Hanoi: Non recursive solution
	@par ------------------------------algorithm-------------------------------
*	- n := no_of_disks
*	- if n = odd
*	-	then move smallest disk to the destination
*  	- else 
*	-	move to auxillary peg  
*  	- loop from i := 0 to 2^(n-1)-1
*	-	perform legal move
*	-	perform smallest disk move 
*
*	- Legal move:
*	- legal move is defined as the move when disk other than smallest disk is moved and bigger disk is never put on smaller
*	- disk.(it is proved that there exists only one such move)
*
*	- smallest disk move:
*	- smallest disk is moved to that peg which disk hasn't come from
*---------------------------------------------------------------------
*
*	@file toh.cpp
*	@par description: this main file for the TOWER OF HANOI
*	it uses two header files linkedList and snode operated on the dynamic stack
*	based on the non-recursive algorithm time complexity O(2^N)	where n is the number of the disk placed on the source peg.
*	no of the disk is taken as input from the user and condition on no of disks is also applied such that user may be aware 
*	that computation time may be larger.
*
*
*
* 	-	main file for the TOWER OF HANOI
*
* 
*
*	------------------------------algorithm-------------------------------
*	-n := no_of_disks
*	-if n = odd
*	-	then move smallest disk to the destination
*  	-else 
*	-	move to auxillary peg  
*  	-loop from i := 0 to 2^(n-1)-1
*	-	perform legal move
*	-	perform smallest disk move 
*
*	-Legal move:
*	-legal move is defined as the move when disk other than smallest disk is moved and bigger disk is never put on smaller
*	-disk.(it is proved that there exists only one such move)
*
*	-smallest disk move:
*	-smallest disk is moved to that peg which disk hasn't come from
*---------------------------------------------------------------------
*	@author Nitesh Bhargava
*	@date 20/08/12
*/
#include <iostream>
#include <stdio.h>
#include "linkedList.h"
#include <string>
#include <math.h>
#include <stdlib.h>
#include "snode.h"
#include <time.h>
using namespace std;
 int main()
{
	clock_t tStart = clock();

        ///pegs creation
        stackLinkedList* src = new stackLinkedList("src");
        stackLinkedList* aux = new stackLinkedList("aux");
        stackLinkedList* dst = new stackLinkedList("dst");

	///smallest node creation
	snode* sNode = new snode();


        /// user input
        int diskno;
        cout << "Enter the number of disks:";
        cin >> diskno;
	int loop = diskno;
        cout << "you have entered "<<diskno<<" disks\n";
	if(loop>25)
	{
		cout<<"you have entered number that will require huge execution time, do you want to continue(y/n)\n";
		char a;
		cin >> a;		
		if(a!='y')
			return 0;
		
	}

        /// inserting the disks on the source peg
        while(loop>0)
        {

                src->push(loop);
		
                loop--;
        }
	
        
        cout <<"src\n";
        src->displayItems();
	cout<<"\n";
	
	///initial smallest disk move 
	if(diskno%2==0)
	{
		src->move(aux);
		sNode->setpaNode("src");
		sNode->setprNode("aux");
	}
	
	else
	{
		src->move(dst);
		sNode->setpaNode("src");
		sNode->setprNode("dst");
	}
	/// for loop start
	for(int i=0;i<pow(2,diskno-1)-1;i++)
	{
		
		///Legal move
		int topsrc = src->topItem();
		int topaux = aux->topItem();
		int topdst = dst->topItem();
		
		if(topsrc==1)
		{
			if(topaux<topdst )
				aux->move(dst);
			else
				dst->move(aux);
		} 
		else if(topaux==1)
		{
			if(topsrc<topdst )
				src->move(dst);
			else
				dst->move(src);
		}
		else
		{
			if(topaux<topsrc )
				aux->move(src);
			else
				src->move(aux);
		}
		
		///smallest disk move
		/// smallest disk will move to the peg which it has not travesed recently
		
		if(sNode->getpaNode()=="aux")	
		{
			if(sNode->getprNode()=="src" )
			{
				src->move(dst);
				sNode->setpaNode("src");
				sNode->setprNode("dst");
			}
			else
			{
				dst->move(src);
				sNode->setpaNode("dst");
				sNode->setprNode("src");
			}

		} 
		else if(sNode->getpaNode()=="dst")
		{
			if(sNode->getprNode()=="src" )
			{
				src->move(aux);
				sNode->setpaNode("src");
				sNode->setprNode("aux");
			}
			else
			{
				aux->move(src);
				sNode->setpaNode("aux");
				sNode->setprNode("src");
			}
		}
		else
		{
			if(sNode->getprNode()=="aux")
			{
				aux->move(dst);
				sNode->setpaNode("aux");
				sNode->setprNode("dst");
			}
			else
			{
				dst->move(aux);
				sNode->setpaNode("dst");
				sNode->setprNode("aux");
			}
		}				
	
			
	}///end for	
	///displaying the contents of  destination peg
	cout<<"\ndst\n";
	dst->displayItems();
	cout <<"Time taken: "<<(double)(clock() - tStart)/(double)CLOCKS_PER_SEC<<"\n";
} /// end main

