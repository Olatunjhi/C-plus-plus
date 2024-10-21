#include <iostream>
using namespace std;

/**
 * main - Check the code
    * @statement: string - To hold statement
    * @replacing: string - To hold replaced statement
    * 
    * Description: using replace function to replace word in statement
    * 
    * Return: Always 0.
 */

int main (void)
{
    string statement;
    string replacing;

    statement = "coding is awesome";

    cout << "BEFORE REPLACE" << endl;
    cout << statement << endl << endl;

    replacing = statement.replace(10,7, "good");

    cout << "AFTER REPLACE" << endl;
    cout << replacing << endl;

    return (0);
}