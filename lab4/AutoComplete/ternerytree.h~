/**
* @file ternery.h
* @author Nitesh Bhargava
* @brief header file for the declaration of ternery class
*
* @par ternery class
* 	@par public:
*        -Default constructor 
*        -TerneryTree();
*
*         -Default destructor 
*        -virtual ~TerneryTree();
*                 
*        -node* Getroot() { return root; }
*        
*         
*        - void Setroot(node* val) { root = val; }
*        - void insert(string value);
*        - void search(string);
*        - node* display(node *, string);
*
*       @par private:
*        node* root; //!< Member variable "root"
*        node* insert(string value, int pos, node* ref);
*	
*   @date 18/09/12
*
*
*/
#ifndef TERNERYTREE_H
#define TERNERYTREE_H
#include "node.h"

class TerneryTree
{
    public:
        /** Default constructor */
        TerneryTree();

        /** Default destructor */
        virtual ~TerneryTree();
        /** Access root
         * \return The current value of root
         */
        node* Getroot() { return root; }
        /** Set root
         * \param val New value to set
         */
        void Setroot(node* val) { root = val; }
        void insert(string value);
        void search(string);
        node* display(node *, string);

    protected:
    private:
        node* root; //!< Member variable "root"
        node* insert(string value, int pos, node* ref);
};

#endif // TERNERYTREE_H
