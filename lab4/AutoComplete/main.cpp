/**
** @file main.cpp
* @brief main execution file
* @mainpage ternery tree
* @par Problem Definition:
*	Auto-Completion: Read two file names as inputs, say Dictionary.txt and Input.txt, from the
*	user. Build a dictionary using the words contained in Dictionary.txt. Use ternary trees for building
*	and maintaining the dictionary. The Input.txt contains test cases for auto-completion.
*
* * @author Nitesh Bhargava CS12M032
* @date 18/09/12
* 
*
*/
#include <iostream>
#include "ternerytree.h"
#include <fstream>
#include <sstream>

int main()
{
    TerneryTree *t  = new TerneryTree();
    string line ;
    ifstream dict,input;
    dict.open("dict.txt");

if (dict.is_open())
  {
    while ( dict.good() )
    {
      getline(dict,line);
      //cout << line << endl;
      stringstream ss;
      ss<<line;
      while(ss)
      {

            if(getline(ss,line,' '))
            t->insert(line);
         //  cout<<"line:"<<line<<endl;
      }

    }
    dict.close();
  }
input.open("input.txt");

if (input.is_open())
  {
    while ( input.good() )
    {
      getline(input,line);
      //cout << line << endl;
      stringstream ss;
      ss<<line;
      while(ss)
      {

            if(getline(ss,line,' ')){
            t->search(line);
            cout<<endl<<"#";
            }

      }

    }
    input.close();
  }
   
    return 0;
}
