#ifndef NODE_CIRCLE_H
#define NODE_CIRCLE_H

#include <iostream>
#include <string>

using namespace std;

class Node_Circle
{
    public:
        string word;
        string modified_word;
        Node_Circle *node_C_next;
        Node_Circle();
        virtual ~Node_Circle();

    protected:

    private:
};

#endif // NODE_CIRCLE_H
