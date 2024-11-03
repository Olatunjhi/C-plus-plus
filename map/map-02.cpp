#include <iostream>
#include <map>
using namespace std;

/**
 * main - Check the code
 * @mapintegers: int - map name
 * 
 * Description: using square brases to hold key for map and set the value for it.
 * accessMap->first means key while accessMap->second means value
 * 
 * Return: Always 0.
 */

int main (void)
{
    map <string, int> mapintegers;

    mapintegers["people"] = 100;
    mapintegers["student"] = 50;
    mapintegers["adult"] = 50;

    auto accessMap = mapintegers.find("student");

    cout << accessMap->first << " are " << accessMap->second << endl;

    return (0);
}