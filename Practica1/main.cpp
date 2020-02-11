#include <iostream>
#include <string>

//#include 'ncurses'

#include "Doubly_Linked_List.h"

using namespace std;

int main()
{


    Doubly_Linked_List *doubly_List = new Doubly_Linked_List();
    doubly_List->insert_Node('a',1);
    doubly_List->insert_Node('b',2);
    doubly_List->insert_Node('c',3);
    doubly_List->insert_Node('d',4);
    doubly_List->insert_Node('e',5);
    doubly_List->insert_Node('f',6);
    doubly_List->insert_Node('h',7);
    doubly_List->insert_Front_Node('i',10);
    doubly_List->insert_Node('j',20);
    doubly_List->insert_Front_Node('z',100);

    cout<<endl;
    cout << "Print Head --->Tail" << endl;
    doubly_List->display_forward();
    cout<<endl;
    cout << "Print Tail --->Head" << endl;
    doubly_List->display_backward();
    cout<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
