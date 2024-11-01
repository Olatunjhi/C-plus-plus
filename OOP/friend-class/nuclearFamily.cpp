#include "nuclearFamily.h"

/**
 * nuclearFamily - class constructor
 * @fatherName: constructor parameter (extendedFamily class)
 * @motherName: constructor parameter (extendedFamily class)
 * display - class function
 */

nuclearFamily::nuclearFamily(string fatherName, string motherName)
:exfam(fatherName, motherName)
{

}

void nuclearFamily::display()
{
    cout << "The father name is : " << exfam.fatherName << endl;
    cout << "The mother name is : " << exfam.motherName << endl;
}