#ifndef NODE_STACK_H
#define NODE_STACK_H

#include <iostream>
#include <string>

using namespace std;

class Node_Stack
{
    public:
        Node_Stack();
        virtual ~Node_Stack();

        Node_Stack *node_Stack_Next;
        string word_Search;
        string word_Replace;
        string status;
        string Word ;
        int position_Word;

    protected:

    private:
};

#endif // NODE_STACK_H
