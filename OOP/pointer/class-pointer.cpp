#include "class_pointer.h"

pointerInClass::pointerInClass()
{
    this->familyMember = nullptr;
    this->fatherAge = nullptr;
    this->motherAge = nullptr;

    this->familyMember = new int(3);
    this->fatherAge = new int(75);
    this->motherAge = new int(65);

}

pointerInClass::~pointerInClass()
{
    delete this->familyMember;
    delete this->fatherAge;
    delete this->motherAge;
}

void pointerInClass::displayData()
{
    cout << "family contain " << *this->familyMember << " members" << endl;
    cout << "father age is: " << *this->fatherAge << endl;
    cout << "mother age is: " << *this->motherAge << endl;
}