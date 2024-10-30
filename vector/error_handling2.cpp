#include <iostream>
#include <vector>
using namespace std;

/**
 * main - Check the code
 * @integer: int - vector integer
 * 
 * Description: error handling with vector
 * 
 * Return: Always 0.
 */

int main (void)
{
    try
    {
        vector <int> integer;

        integer.push_back(5);
        integer.push_back(6);
        integer.push_back(9);

        for (int i = 0; i < 5; i++)
        {
            cout << integer.at(i) << endl;
        }
    }
    catch(...)
    {
        cout << "Exceeded space" << endl;
    }
    
    return (0);
}