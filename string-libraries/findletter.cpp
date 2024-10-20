#include <iostream>
using namespace std;

/**
 * main - check the code
 * @statement: string - To hold statement
 * @length: int - To hold statement length
 * 
 * Description: using length function to get the statement length and making the use "[]" to get access to each character
 * of statement with the help of loop.
 * 
 * Return: Always 0.
 */

int main (void)
{
    string statement;

    statement = "Coding is awesome";
    int length = statement.length();

    // looping through statemnet
    for (int i = 0; i < length; i++)
    {
        if (statement[i] == ' ')
        {
            cout << " word space" << endl;
            continue; 
        }

        cout << "index " << i << " stand for " << "---> " << statement[i] << endl;
    }
    return (0);
}