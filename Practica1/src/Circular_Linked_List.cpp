#include "Circular_Linked_List.h"

#include <iostream>
#include <string>

using namespace std;

Circular_Linked_List::Circular_Linked_List()
{
    //ctor
    head_circle = NULL;
    tail_circle = NULL;

}

Circular_Linked_List::~Circular_Linked_List()
{
    //dtor
}
// begin method is_Empty_Circle
bool Circular_Linked_List::is_Empty_Circle()
{
    if(head_circle == NULL)
    {
    return true;
    }
    else
    {
    return false;
    }


}



//end method is_empty_Circle

void Circular_Linked_List::inser_node_circle(string word, string modified_word)
{
    Node_Circle *newNode = new Node_Circle();
    newNode->word = word;
    newNode->modified_word = modified_word;
    if(is_Empty_Circle())
    {
        head_circle = newNode;
        head_circle->node_C_next = head_circle;
        tail_circle = head_circle;
    }
    else
    {
        tail_circle->node_C_next = newNode;
        newNode->node_C_next = head_circle;
        tail_circle = newNode;

    }

}
//end method insert nodelay)


void Circular_Linked_List::display_node()
{
    Node_Circle *temp = new Node_Circle();
    temp = head_circle;
    if(head_circle != NULL)
    {
        while(temp!=head_circle)
        {
        cout<<"Palabra: "<<temp->word;
        cout<<"Modificada:"<<temp->modified_word;
        temp = temp->node_C_next;

        }

    }
    else
    {
    cout<<"the circular linked list is empty";

    }


}
