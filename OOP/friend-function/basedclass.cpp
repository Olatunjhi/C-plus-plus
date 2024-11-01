#include "basedclass.h"

/**
 * basedclass - class constructor
 * @age: constructor parameter
 * @name: constructor parameter
 * basedclassFriend - friend function of based class
 * @friendObject: friend function parameter
 */

basedclass::basedclass(int age, string name)
{
    this->age = age;
    this->name = name;
}

void basedclassFriend(basedclass friendObject)
{
    cout << "Age is : " << friendObject.age << endl;
    cout << "Name is : " << friendObject.name << endl;
}