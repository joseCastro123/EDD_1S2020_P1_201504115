#ifndef FILE_GRAPHVIZ_H
#define FILE_GRAPHVIZ_H

#include <iostream>
#include <string>
//#include <fstream.h>
#include "Doubly_Linked_List.h"

using namespace std;

class file_Graphviz
{
    public:
        file_Graphviz();
        virtual ~file_Graphviz();
        void createFile_Double_Linked_list(Doubly_Linked_List **);
        void createFile_Linked_List();
        void createFile_Circular_Linked_List();


    protected:

    private:
};

#endif // FILE_GRAPHVIZ_H
