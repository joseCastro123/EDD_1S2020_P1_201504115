#ifndef MYWIN_H
#define MYWIN_H

#include <iostream>
#include <string>
#include <ncurses.h>

using namespace std;

class myWin
{
    public:
        //Variables
        WINDOW *win;
        string word_menu[11];
        int pos_y;
        int pos_x;
        int heigth,width,start_x,start_y;

        //Method
        myWin();
        virtual ~myWin();
        void window_start();
        void arrows(int);//arrows up left down and rigth
        void createWindows();//create Window
        void getInput_Key(int);//get
        void keyPressed(int);//key pressed user

};

#endif // MYWIN_H
