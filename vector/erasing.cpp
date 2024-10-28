#include <iostream>
#include <vector>
using namespace std;

/**
 * main - Check the code
 * @integers: int - vector integer
 * 
 * Description: using erase function to erase some element in the vector
 * 
 * Return: Always 0.
 */

int main (void)
{
    vector <int> integers;

    integers.push_back(9);
    integers.push_back(4);
    integers.push_back(5);

    cout << "BEFORE ERASE HAPPEN" << endl;

    for (int i = 0; i <= integers.size(); i++)
    {
        cout << integers[i] << " has index number " << i << endl;

        if (i == 1)
        {
            integers.erase(integers.begin() + i);
        }
    }

    cout << endl;

    cout << "AFTER ERASING" << endl;

    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << " now has index number " << i << endl;
    }

    return (0);
}