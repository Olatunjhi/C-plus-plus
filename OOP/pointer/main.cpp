#include "class_pointer.h"

int main (void)
{
    pointerInClass *objectPointer;

    objectPointer = new pointerInClass();
    
    objectPointer->displayData();

    delete objectPointer;

    return (0);
}