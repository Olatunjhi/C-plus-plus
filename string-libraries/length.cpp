#include <iostream>
using namespace std;

/**
 * main - check the code
 * @name: string - hold string word
 * @namelength: int - hold word length
 * 
 * Description: using length function as string library to get length of word
 * 
 * Return: Always 0.
 */

int  main(void)
{
    string name;
    int namelength;

    name = "let connect";

    namelength = name.length();

    cout << "length of the 'let connect' word is : " << namelength << endl;

    return (0);
}