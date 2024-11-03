#include <iostream>
#include <map>
using namespace std;

/**
 * main - Check the code
 * @mapintegers: int - map name
 * 
 * Description: using insert fucntion with pair function to insert into map.
 * it->first means key while it->second means value
 * 
 * Return: Always 0.
 */

int main (void)
{
    map <char, int> mapintegers;

    mapintegers.insert(pair<char, int>('A', 90));
    mapintegers.insert(pair<char, int>('B', 75));
    mapintegers.insert(pair<char, int>('C', 50));
    mapintegers.insert(pair<char, int>('D', 35));

    for (map <char, int>::iterator it = mapintegers.begin(); it != mapintegers.end(); it++)
    {
        cout << it->first << "  " << it->second << endl;
    }

    return (0);
}