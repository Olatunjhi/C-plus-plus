#include <iostream>
using namespace std;

/**
 * main - check the code
 * @name: string - To hold word enter by user
 * @namesize: int - To hold size of word enter by user
 * 
 * Description: using size function to get size of word enter by user
 * 
 * Return: Always 0.
 */

int main (void)
{
    string name;
    int namesize;

    cout << "Enter your full name : ";
    getline(cin, name);

    namesize = name.size();

    cout << "Your name have " << namesize << " size in character" << endl;

    return (0);
}