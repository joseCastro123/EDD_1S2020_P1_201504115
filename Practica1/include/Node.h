#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

using namespace std;

class Node
{
    public:
        Node();
        virtual ~Node();
        int id;
        char caracter;
        Node *next;
        Node *previous;
        //Node();
        void setCaracter(char);
        char getCaracter();

    protected:

    private:
};

#endif // NODE_H
