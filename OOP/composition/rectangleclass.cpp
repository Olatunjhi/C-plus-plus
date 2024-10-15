#include "rectangleclass.h"

rectangleclass::rectangleclass(int length, int height, int squareLength)
:square(squareLength)
{
    this->length = length;
    this->height = height;
}

void rectangleclass::display()
{
    cout << "The area of rectangle is : " << length * height << endl;

    cout << endl << endl;

    square.display();
}

