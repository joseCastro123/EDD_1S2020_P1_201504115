#include "Node.h"

#include <iostream>
#include <string>

using namespace std;

Node::Node()
{
    //ctor
    //caracter = NULL;
    next = NULL;
    previous =NULL;
}

Node::~Node()
{
    //dtor
}

void Node::setCaracter(char value1)
{
caracter = value1;
}

char Node::getCaracter()
{

return caracter;

}
