#include <iostream>
using namespace std;

/**
 * main - check the code
 * @name: string - To hold the user name
 * @rposition: char - To hold character user want to check it position
 * @findposition: int - To hold the position of the character
 * 
 * Description: using reverse find function to get the position of character at the if their are two same characters
 * 
 * Return: Always 0.
 */

int main (void)
{
    string name;
    char rposition;
    int findposition;

    cout << "Enter your full name : ";
    getline(cin, name);

    cout << "Check position of any character in your name from back, type it! : ";
    cin >> rposition;

    cout << endl;

    findposition = name.rfind(rposition) + 1;

    cout << "The character is at the position " << findposition << " in your name"<< endl;

    return (0);
}