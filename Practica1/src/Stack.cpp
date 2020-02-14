#include "Stack.h"
#include "Node_Stack.h"

#include <iostream>
#include <string>

using namespace std;

Stack::Stack()
{
    //ctor
    head_Stack = NULL;
}

Stack::~Stack()
{
    //dtor
}

bool Stack::is_Empty_S()
{
    if(head_Stack == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }

}

void Stack::push_Stack(string word_Search, string word_Replace, string state, string word,int position)
{
    Node_Stack *new_Push = new Node_Stack();
    new_Push->word_Search = word_Search;
    new_Push->word_Replace = word_Replace;
    new_Push->status = state;
    new_Push->Word = word;
    new_Push->position_Word = position;
    new_Push->node_Stack_Next = head_Stack;
    head_Stack = new_Push;

}

void Stack::display_Stack()
{
    Node_Stack *temp = new Node_Stack();
    temp = head_Stack;
    if(head_Stack != NULL)
    {
        while(temp != NULL)
        {
            cout<<"Buscada:"<<temp->word_Search<<endl;
            cout<<"Reemplazar:"<<temp->word_Replace<<endl;
            cout<<"Estado:"<<temp->status<<endl;
            cout<<"Palabra:"<<temp->Word<<endl;
            cout<<"Posicion:"<<temp->position_Word<<endl<<endl<<endl<<endl<<endl;

            temp = temp->node_Stack_Next;


        }
    }
    else
    {
        cout<<"La lista esta vacia!!!!!!!";
    }


}












