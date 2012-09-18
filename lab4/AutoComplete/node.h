#ifndef NODE_H
#define NODE_H
using namespace std;
#include <iostream>
class node
{
    public:
        /** Default constructor */
        node();
        /** Copy constructor */
        node(char data,bool isWord);
        /** Access left
         * \return The current value of left
         */
        node* Getleft() { return left; }
        /** Set left
         * \param val New value to set
         */
        void Setleft(node* val) { left = val; }
        /** Access equal
         * \return The current value of equal
         */
        node* Getequal() { return equal; }
        /** Set equal
         * \param val New value to set
         */
        void Setequal(node* val) { equal = val; }
        /** Access right
         * \return The current value of right
         */
        node* Getright() { return right; }
        /** Set right
         * \param val New value to set
         */
        void Setright(node* val) { right = val; }
        /** Access data
         * \return The current value of data
         */
        char Getdata() { return data; }
        /** Set data
         * \param val New value to set
         */
        void Setdata(char val) { data = val; }
        /** Access IsWord
         * \return The current value of IsWord
         */
        bool GetIsWord() { return IsWord; }
        /** Set IsWord
         * \param val New value to set
         */
        void SetIsWord(bool val) { IsWord = val; }
    protected:
    private:
        node* left; //!< Member variable "left"
        node* equal; //!< Member variable "equal"
        node* right; //!< Member variable "right"
        char data; //!< Member variable "data"
        bool IsWord; //!< Member variable "IsWord"
};

#endif // NODE_H
