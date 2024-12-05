#ifndef CLASS_POINTER_H
#define CLASS_POINTER_H

#include <iostream>
using namespace std;

class pointerInClass
{
    public:
        pointerInClass();
        ~pointerInClass();
        void displayData();

    protected:

    private:
        int *familyMember;
        int *motherAge;
        int *fatherAge;

};

#endif /* CLASS-POINTER_H */