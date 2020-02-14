#include <iostream>
#include <string>


#include <ncurses.h>

#include "Doubly_Linked_List.h"
#include "Stack.h"

using namespace std;

int main()
{
////////////////////////
WINDOW *w;

  int tecla;

  int max_x, max_y, pos_x, pos_y;

  bool fin = false;


  w = initscr();

  keypad(w, TRUE);

  noecho();

  nonl();

  curs_set(0);//change cursor

  erase();

  getmaxyx(w, max_y, max_x);

  pos_x = max_x / 2;
  pos_y = max_y / 2;

  do
  {
        move(pos_y, pos_x);
        addch('@');
        refresh();

    tecla = getch();

        move(pos_y, pos_x);
        addch(' ');
        cout << "Print Head --->Tail" << endl;
        refresh();

        switch(tecla)
        {
          case KEY_UP:
             pos_y = (pos_y + (max_y - 1)) % max_y;
             break;
          case KEY_LEFT:
             pos_x = (pos_x + (max_x - 1)) % max_x;
             break;
          case KEY_RIGHT:
             pos_x = (pos_x + 1) % max_x;
             break;
          case KEY_DOWN:
             pos_y = (pos_y + 1) % max_y;
             break;
          case 27: // tecla ESC
             fin = true;
             break;
        }

  }  while (!fin);

  endwin();


    //////////////////////////////////

    Doubly_Linked_List *doubly_List = new Doubly_Linked_List();
    doubly_List->insert_Node('a',1);

    doubly_List->insert_Node('b',2);
    doubly_List->delete_Node(2);
    doubly_List->insert_Node('c',3);
    //doubly_List->insert_Node('d',4);
    //doubly_List->insert_Node('e',5);
    //doubly_List->insert_Node('f',6);
    //doubly_List->insert_Node('h',7);
    //doubly_List->insert_Front_Node('i',10);
    //doubly_List->insert_Node('j',20);
    //doubly_List->insert_Front_Node('z',100);



    cout<<endl;
    cout << "Print Head --->Tail" << endl;
    doubly_List->display_forward();
    cout<<endl;
    cout << "Print Tail --->Head" << endl;
    doubly_List->display_backward();
    cout<<endl;

    cout << "Hello world!" << endl;

    Stack *stacck = new Stack();
    stacck->push_Stack("sis.","Sistemas","No Revertido","",0);
    stacck->push_Stack("hol.","HOla","No Revertido","",0);
    stacck->push_Stack("quer","querer","No Revertido","",0);

    stacck->display_Stack();
    return 0;
}
