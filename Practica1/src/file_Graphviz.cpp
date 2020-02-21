#include "file_Graphviz.h"
#include "Doubly_Linked_List.h"

#include <fstream>//create file
#include <iostream>
#include <string>


using namespace std;


file_Graphviz::file_Graphviz()
{
    //ctor
}

file_Graphviz::~file_Graphviz()
{
    //dtor
}

void file_Graphviz::createFile_Double_Linked_list(Doubly_Linked_List **doubleLinked)
{
string begin_info = "digraph R { \n rankdir=LR \n node [shape=record fontname=Arial];\n";
string begin_rank = "//{ rank=same  ";
string end_rank = "}\n";
string end_info="}";
string info_label = "";
string info_rank = "";
string info_doubly_list ="";

if((*doubleLinked)->head!= NULL)
{

    ofstream archivo;  // objeto de la clase ofstream

    archivo.open("datos.dot");

while((*doubleLinked)->head != NULL)
    {

    info_label = info_label + (*doubleLinked)->head->caracter +" [label=\""+(*doubleLinked)->head->caracter+"\\"+"l\"]\n";

    info_rank = info_rank + (*doubleLinked)->head->caracter+" ";

    if((*doubleLinked)->head->next != NULL)//not fineshe here
    {
     //info_rank = info_rank + (*doubleLinked)->head->caracter+" ";

     info_doubly_list = info_doubly_list +(*doubleLinked)->head->caracter+"->"+(*doubleLinked)->head->next->caracter+"\n"+
                        (*doubleLinked)->head->next->caracter+"->"+(*doubleLinked)->head->caracter+"\n";
    }

    (*doubleLinked)->head = (*doubleLinked)->head->next;

    }//end while


    archivo<<begin_info;
    archivo<<info_label;
    archivo<<begin_rank;
    archivo<<info_rank;
    archivo<<end_rank;
    archivo<<info_doubly_list;
    archivo<<end_info;
    archivo.close();
    cout<<"Archivo creado correctamente";
}
else
{

cout<<"the doubly linked list is empty";
}
}


















