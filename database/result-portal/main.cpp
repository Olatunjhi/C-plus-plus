#include "main.h"

/**
 * main - Check the code
 * @category: string - To choose category
 * 
 * Description: mini result checking portal
 * 
 * Return: Always 0. 
 */

int main (void)
{
    string category;

    cout << "\nWELCOME TO THE PORTAL\n";

    cout << "\nAre you a teacher or a student?" << endl;
    cin >> category;

    if (category == "teacher" || category == "Teacher")
    {
        createData();
    }

    if (category == "student" || category == "Student")
    {
        findData();
    }

    return (0);
}