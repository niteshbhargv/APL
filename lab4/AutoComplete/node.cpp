#include "node.h"

node::node()
{
    //constructor
}
node :: node(char data,bool IsWord)
{
// copy constructor 
    this->data = data;
    this->IsWord = IsWord;
    left = NULL;
    right = NULL;
    equal = NULL;

}
