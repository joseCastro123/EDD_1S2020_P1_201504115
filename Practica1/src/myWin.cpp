#include "myWin.h"

#include <iostream>
#include <string>
#include <ncurses.h>
//#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;


myWin::myWin()
{
    //ctor
    win = NULL;

    word_menu[0]="UNIVERSIDAD DE SAN CARLOS DE GUATEMALA";
    word_menu[1]="FACULTAD DE INGENIERIA";
    word_menu[2]="ESTRUCTURA DE DATOS";
    word_menu[3]="PRACTICA 1";
    word_menu[4]="JOSE CASTRO SINCU";
    word_menu[5]="201504115";
    word_menu[6]="MENU";
    word_menu[7]="1.Crear Archivo";
    word_menu[8]="2.Abrir Archivo";
    word_menu[9]="3.Archivos Recientes";
    word_menu[10]="4.alir";
    pos_x =0;
    pos_y =0;
    heigth = width = start_x = start_y = 0;
}

myWin::~myWin()
{
    //dtor
}

void myWin::window_start()
{

initscr();
noecho();//disable cicle ket input
cbreak();//disable buffer
curs_set(1);//size cursor

getmaxyx(stdscr,heigth,width);//get size heigth and width the screen
start_x = start_y = 0; //start position in the screen
win = newwin(heigth,width,start_y,start_x);//initialize screen

WINDOW *second = subwin(win,heigth-8,width-4,start_y+2,start_x+2);

box(second,0,0);
refresh();
keypad(win,true);//option enables the keypad of the user's terminal
refresh();//must be called to get actual output to the terminal

box(win,pos_y,pos_x);//create box in the screen


wrefresh(win);//refresh screen with text

pos_x = 1;//position cursor in x
pos_y = 1;//position cursor in y
//wmove(win,y,x)





}

void myWin::createWindows()
{

//ncurses start xwith initscr();
initscr();
noecho();//disable cicle ket input
cbreak();//disable buffer
curs_set(1);//size cursor

getmaxyx(stdscr,heigth,width);//get size heigth and width the screen
start_x = start_y = 0; //start position in the screen
win = newwin(heigth,width,start_y,start_x);//initialize screen

WINDOW *second = subwin(win,heigth-8,width-4,start_y+2,start_x+2);

box(second,0,0);
refresh();
keypad(win,true);//option enables the keypad of the user's terminal
refresh();//must be called to get actual output to the terminal

box(win,pos_y,pos_x);//create box in the screen


mvwprintw(win,pos_y,pos_x+5,"EDD Practica 1");//write in sthe screen
mvwprintw(win,heigth-2,pos_x+5,"^w(Buscar y Reemplazar)");//write in sthe screen
mvwprintw(win,heigth-2,pos_x+35,"^c(Reportes)");//write in sthe screen
mvwprintw(win,heigth-2,pos_x+55,"^s(Guardar)");//write in sthe screen

wrefresh(win);//refresh screen with text

pos_x = 1;//position cursor in x
pos_y = 1;//position cursor in y
//wmove(win,y,x)
wmove(win,pos_y+2,pos_x+2);//fuction move the cursor

int caracter = wgetch(win);//get input key
getInput_Key(caracter);
wclear(win);
wrefresh(win);

endwin();
}//end method create Window

//begin methos getInput_Key User
void myWin::getInput_Key(int caracter)
{
while(caracter != 27)
{

keyPressed(caracter);

switch(caracter)
{
    case 10:
    //new line nothing make Espacio no hace nada
    break;

    case KEY_BACKSPACE:
//pos_x

    if(pos_x!=1)
    {
    pos_x = pos_x -1;
    }
    else
    {
        if(pos_y !=1)
        {
        pos_x = width -2;
        pos_y = pos_y -1;
        }

    }


    mvwaddch(win,pos_y,pos_x,32);
    wmove(win,pos_y,pos_x);


    break;

    case KEY_DOWN:
        if(pos_y != 28)
        {
        pos_y = pos_y +1;
        wmove(win,pos_y,pos_x);
        }

    break;
    case KEY_UP:
        if(pos_y != 1)
        {
        pos_y = pos_y -1;
        wmove(win,pos_y,pos_x);
        }

    break;
    case KEY_LEFT:
        if(pos_x != 1)
        {
        pos_x = pos_x -1;
        wmove(win,pos_y,pos_x);
        }
        else
        {
            if(pos_y !=1)
            {
            pos_x = width -2;
            pos_y = pos_y -1;
            wmove(win,pos_y,pos_x);

            }


        }

    break;
    case KEY_RIGHT:
        if(pos_x != width-2)
        {
        pos_x = pos_x +1;
        wmove(win,pos_y,pos_x);
        }
        else
        {
        //Enter in asci in ncurses is number 10
                if(pos_y<(heigth-2))
                {
                    pos_y++;
                }
                pos_x=1;
                wmove(win,pos_y,pos_x);
                wrefresh(win);
        }

    break;


    default:
        waddch(win,caracter);
        pos_x++;
    break;

}

wrefresh(win);
caracter = wgetch(win);
}//end while

}//end method getInput_Key User

//begin method keyPressed
void myWin::keyPressed(int caracter)
{
if(pos_x ==(width-1) || caracter==10)
  {
    //Enter in asci in ncurses is number 10
    if(pos_y<(heigth-2))
    {
        pos_y++;
    }
    pos_x=1;
    wmove(win,pos_y,pos_x);
    wrefresh(win);
  }

}//end method keyPressed


void myWin::arrows(int arrow)
{
switch(arrow)
{
case KEY_DOWN:
pos_y = pos_y +1;
wmove(win,pos_y,pos_x);
break;
case KEY_UP:
pos_y = pos_y -1;
wmove(win,pos_y,pos_x);
break;
case KEY_LEFT:
pos_x = pos_x -1;
wmove(win,pos_y,pos_x);
break;
case KEY_RIGHT:
pos_x = pos_x +1;
wmove(win,pos_y,pos_x);
break;
default:
break;

}//end switch



}//end method arrows
