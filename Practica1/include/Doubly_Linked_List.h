#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "Node.h"

#include <iostream>
#include <string>

using namespace std;


class Doubly_Linked_List
{
    public:
        Node *head;
        Node *tail;
        Doubly_Linked_List();
        virtual ~Doubly_Linked_List();
        bool is_Empty();//done
        void insert_Node(char,int);//done
        void insert_Front_Node(char,int);//done
        void insert_Middle_Node(char,int,int);
        void delete_Node(int);


        void display_forward();
        void display_backward();


    protected:

    private:
};

#endif // DOUBLY_LINKED_LIST_H
