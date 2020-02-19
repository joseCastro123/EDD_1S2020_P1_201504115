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



}//end method display stack

//begin method pop_stack

void Stack::pop_Stack()
{
Node_Stack* current = new Node_Stack();
	current = head_Stack;
	Node_Stack  *previous = new Node_Stack();
	previous = NULL;
	int node_search = 0;
	bool found_data = false;
	cout << " Ingrese el dato del Nodo a Buscar para Eliminar: ";
	cin >> node_search;
	if(head_Stack!=NULL){
		while(current!=NULL && found_data != true){

			if(current->position_Word == node_search){
				cout << endl << " Nodo con el dato ( " << node_search << " ) Encontrado";

				if(current == head_Stack){
					head_Stack = head_Stack->node_Stack_Next;
				}else{
					previous->node_Stack_Next = current->node_Stack_Next;
				}
				cout << endl << " Nodo Eliminado" << endl << endl;
				found_data = true;
			}
			previous = current;
			current = current->node_Stack_Next;
		}
		if(found_data==false){
			cout << endl << " Nodo no Encontrado" << endl << endl;
		}
	}else{
		cout << endl << " La Pila se encuentra vacia" << endl << endl;
	}

}












