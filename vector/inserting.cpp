#include <iostream>
#include <vector>
using namespace std;

/**
 * main - Check the code
 * @integer: int - vector name integer
 * 
 * Description: inserting in vector
 * 
 * Return: Always 0.
 */

int main (void)
{
    //vector declare
    vector <int> integer;

    //inserting in vector
    integer.push_back(int(3));
    integer.push_back(int(2));
    integer.push_back(int(6));
    integer.push_back(int(9));

    //iterating through vector integer
    for (int i = 0; i < integer.size(); i++)
    {
        cout << integer.at(i) << " has index number " << i << endl;
    }
    
    return (0);
}