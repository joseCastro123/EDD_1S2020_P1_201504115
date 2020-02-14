#include "Node_Stack.h"


#include <iostream>
#include <string>

using namespace std;

Node_Stack::Node_Stack()
{
    //initialize variables
    word_Search = "";
    word_Replace ="";
    status = "";
    Word = "";
    position_Word = 0;
    node_Stack_Next = NULL;

}

Node_Stack::~Node_Stack()
{
    //dtor
}
