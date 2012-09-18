/**
* @author Nitesh Bhargava CS12M032
* @date 18/09/12
* @mainpage: ternery Tree 
* @breif:  in this file we hav defined the member functions in the ternery.h
*
* 
*
*/	
#include "ternerytree.h"
/////////////////////////////////// ternery tree /////////////////////////////////////
/**
*
*    constructor for the ternery tree
*/
TerneryTree::TerneryTree()
{
    root = NULL;
}
/**
*
*    destructor for the ternery tree
*/

TerneryTree::~TerneryTree()
{
   
}
/**
*
*     copy constructor for the ternery tree
*     @param string
*/
void TerneryTree :: insert(string s)
    {
        //if(root == NULL)
        insert(s,0,root);

    }
/**
	*function insert - insert a string into ternery tree
	*@return value - node* 
	*@param - string s, int pos, node*	
	*/

node* TerneryTree :: insert(string s, int pos, node* temp)
    {
        if(temp == NULL) /// node is NULL thus adding a new node
        {
                node *n = new node(s[pos],false);
                temp =n;
                if(root == NULL)
                root = n;
        }
        if(s[pos] < temp->Getdata()) /// character is less than the node thus calling insert function on the left child of tree
        {
            temp->Setleft(insert(s,pos,temp->Getleft()));
        }
        else if(s[pos] > temp->Getdata())  /// character is greater than the node thus calling insert function on the right child of tree
        {
           temp->Setright(insert(s,pos,temp->Getright())) ;
        }
        else
        {
            if(pos +1 == s.length())   /// condition when the string has reached the end
            {
                    temp->SetIsWord(true); 

            }

            else
            {

                    temp->Setequal(insert(s,pos+1,temp->Getequal())) ; /// if string has not completed recursively call on the equal child of the tree
            }

        }
    return temp;

    }
/**********************************************************************
	*function search - search a string in the ternery tree
	*@return value - void 
	*@param - string 	
***********************************************************************/

void TerneryTree::search(string prefix)
{
    int pos = 0;
    node* n = root;
    while(n!=NULL){


    if(n->Getdata()<prefix[pos])  /// search on the right subtree
    {
        n = n->Getright();
    }
    else if(n->Getdata()>prefix[pos])  /// search on the left subtree
    {
        n = n->Getleft();
    }
    else
    {
        if(++pos==prefix.length())  /// string reached at the end
        {
            if(n->GetIsWord())   /// condition for the exact match
                cout<<prefix<<" found";
            else
            {

               
              display(n->Getequal(),prefix); /// calling autocomplete function "display"
            


            }

        }
        n = n->Getequal(); /// else traverse down the equal part of the subtree
    }


    }

}
/************************************************************************
*	function search - search a string in the ternery tree
*	@return value - void 
*	@param - string 	
*************************************************************************/

node * TerneryTree::display(node *n,string s)
{


    if(n->Getleft()!=NULL)  /// if left child is not null recurse there
    {
        display(n->Getleft(),s);
    }
    if(n->Getright()!=NULL) /// if right child is not null recurse there
    {
        display(n->Getright(),s);
    }
     if(n->Getequal()!=NULL) /// if equal child is not null recurse there
    {

        display(n->Getequal(),s+n->Getdata());
    }
    if(n!=NULL)
    {
        s = s+n->Getdata(); 
       if(n->GetIsWord())
        cout<<endl<<s;
    }





}


