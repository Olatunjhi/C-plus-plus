#include <iostream>
using namespace std;

/**
 * main - Check the code
 * @name1: string - To hold name1
 * @name2: string - To hold name2
 * 
 * Description: using swap function to swap name1 to name2
 * 
 * Return: Always 0.
 */

int main (void)
{
    string name1;
    string name2;

    name1 = "Idowu";
    name2 = "Yusuff";

    cout << "BEFORE SWAP" << endl;
    cout << "Name one contains " << name1 << endl << "Name two contains " << name2 << endl << endl;

    name1.swap(name2);

    cout << "AFTER SWAP" << endl;
    cout << "Name one contains " << name1 << endl << "Name two contains " << name2 << endl;

    return (0);
} 