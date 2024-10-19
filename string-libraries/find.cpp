#include <iostream>
using namespace std;

/**
 * main - check the code
 * @name: srting - To hold name enter by user
 * @findme: char - To hold character user looking for
 * @position: int - To get position of character user looking for
 * 
 * Description: using find function to find the position of character enter by user
 * 
 * Return: Always 0.
 */

int main (void)
{
    string name;
    char findme;
    int position;

    cout << "Enter your full name : ";
    getline(cin, name);

    cout << "Find any character in your name, type it : ";
    cin >> findme;

    position = name.find(findme) + 1;

    cout << "The character you find belong to number " << position << " in your name" << endl;
    
    return (0);
}