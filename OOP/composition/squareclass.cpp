#include "squareclass.h"

squareclass::squareclass(int length)
{
    this->length = length;
}

void squareclass::display()
{
    cout << "The area of square is : " << length * length << endl; 
}