#ifndef RECTANGLECLASS_H
#define RECTANGLECLASS_H
#include "squareclass.h"
#include <iostream>
using namespace std;

class rectangleclass
{
    public:
        rectangleclass(int length, int height, int squareLength);
        void display();

        //DECLARE OBJECT OF ANOTHER CLASS
        squareclass square;

    protected:

    private:
        int length;
        int height;
    
};

#endif /* RECTANGLECLASS_H */