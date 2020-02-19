#ifndef CIRCULAR_LINKED_LIST_H
#define CIRCULAR_LINKED_LIST_H

#include "Node_Circle.h"
#include <iostream>
#include <string>

using namespace std;


class Circular_Linked_List
{
    public:
        Node_Circle *head_circle;
        Node_Circle *tail_circle;
        bool is_Empty_Circle();
        void inser_node_circle(string, string);
        void display_node();
        Circular_Linked_List();
        virtual ~Circular_Linked_List();

    protected:

    private:
};

#endif // CIRCULAR_LINKED_LIST_H
