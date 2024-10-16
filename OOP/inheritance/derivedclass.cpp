#include "derivedclass.h"

derivedclass::derivedclass(int based1Age, string based1Name, int based2Age, string based2Name)
:basedclass1(based1Age, based1Name), basedclass2(based2Age, based2Name)
{

}

void derivedclass::display()
{
    cout << "based class one age is : " << basedclass1::age << endl;
    cout << "based class one name is : " << basedclass1::name << endl;
    cout << "based class two age is : " << basedclass2::age << endl;
    cout << "based class two name is : " << basedclass2::name << endl;
}