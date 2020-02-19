#include "Doubly_Linked_List.h"
#include "Node.h"
#include <iostream>
#include <string>

using namespace std;

//Node *head;
//Node *tail;
Doubly_Linked_List::Doubly_Linked_List()
{
    head = NULL;
    tail = NULL;

}

Doubly_Linked_List::~Doubly_Linked_List()
{
    //dtor
}

bool Doubly_Linked_List::is_Empty()
{
	if(head==NULL)
	{
		return true;

	}
	else
	{
		return false;
	}

}// end method

//begin method insert_Node
void Doubly_Linked_List::insert_Node(char caracter1, int id1)
{
     Node *new_Node = new Node();
     new_Node->caracter = caracter1;
     new_Node->id = id1;
     if(is_Empty())
     {
         head = new_Node;
         head->next = NULL;
         head->previous = NULL;
         tail = head;

     }
     else
     {
        tail->next = new_Node;
        new_Node->next = NULL;
        new_Node->previous =tail;
        tail = new_Node;

     }
}
//end method insert_Node

//begin method insert_Front_Node
void Doubly_Linked_List::insert_Front_Node(char caracter, int id)
{
    Node *new_Node = new Node();
    new_Node->id = id;
    new_Node->caracter = caracter;

    if(is_Empty())
    {
    head = new_Node;
    head->next = NULL;
    head->previous = NULL;
    tail = head;
    }
    else
    {
    head->previous = new_Node;
    new_Node->next = head;
    new_Node->previous = NULL;
    head = new_Node;
    }


}
//end method insert_Front_Node

//begin method insert_Middle_Node
void Doubly_Linked_List::insert_Middle_Node(char caracter, int id,int pos)
{

    Node *new_Node = new Node();
    new_Node->id = id;
    new_Node->caracter = caracter;

    if(is_Empty())
    {
        head = new_Node;
        head->next = NULL;
        head->previous = NULL;
        tail = head;
    }
    else
    {
        Node *temp = head;
        while(temp!=NULL)
        {


        }
    }



}

//end method insert_Middle_Node

//begin method Delete_Node
void Doubly_Linked_List::delete_Node(int id)
{
    Node *current_Node = new Node();
    current_Node = head;
    Node *previous_Node = new Node();
    previous_Node = NULL;

    bool found = false;
    if(head!=NULL)
    {
        while(current_Node != NULL && found != true)
        {
            if(current_Node->id == id)
            {
             if(current_Node == head)
             {
                 head = head->next;
                 head->previous = NULL;
             }
             else if (current_Node == tail)
             {
                 tail = tail->previous;
                 tail->next = NULL;
             }
             else
             {
                previous_Node->next = current_Node->next;
                current_Node->next->previous = previous_Node;
             }

             found = true;
            }

            previous_Node = current_Node;
            current_Node = current_Node->next;

            if(found == true)
                break;
        }

    }
    else
    {
    cout<<"La Lista esta vacia!!!! >:v";
    }



}
//end method  Delete_Node

//begin method display_forward
void Doubly_Linked_List::display_forward()
{
    Node *temp = head;
    if(temp != NULL)
    {
    while(temp != NULL)
    {
        cout<<temp->id<<"<-->";
        temp = temp->next;
    }
    }
    else
    {
     cout<<"La Lista Esta Vacia!!!";
    }


}
//end method display_forward

//begin method display_backward
void Doubly_Linked_List::display_backward()
{
        Node *temp = new Node();
        temp = tail;
        if(head!=NULL)
        {
            while(temp != NULL)
            {
                cout<<temp->id<<"-->";
                temp = temp->previous;
            }

        }
        else
        {
            cout<<"La lista esta vacia!!!";
        }


}

//end method display_backward

