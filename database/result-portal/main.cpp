#include "main.h"

int main (void)
{
    string category;

    cout << "\nWELCOME TO THE PORTAL\n\n";

    cout << "Are you a teacher or a student?" << endl;
    cin >> category;

    if (category == "teacher" || category == "Teacher")
    {
        createData();
    }

    if (category == "student" || category == "Student")
    {
        
    }

    return (0);
}