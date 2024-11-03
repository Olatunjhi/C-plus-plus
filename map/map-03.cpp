#include <iostream>
#include <map>
using namespace std;

/**
 * main - Check the code
 * @mapchar: char - map name with int key
 * 
 * Description: it.first means key while it.second means value
 * 
 * Return: Always 0.
 */

int main (void)
{
    map <int, char> mapchar;

    mapchar[100] = 'A';
    mapchar[75] = 'B';
    mapchar[50] = 'C';

    // looping through map
    for (auto it : mapchar)
    {
        cout << it.first << "  " << it.second << endl;
    }

    return (0);
}