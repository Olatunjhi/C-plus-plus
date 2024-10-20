#include <iostream>
using namespace std;

/**
 * main - check the code
 * @phrase: string - To hold phrase
 * @erasephrase: string - empty
 * 
 * Description: using erase function to erase
 * 
 * Return: Always 0.
 */

int main (void)
{
    string phrase;
    string erasephrase;

    phrase = "let code";

    cout << "BEFORE ERASE" << endl;

    cout << phrase << endl << endl;

    erasephrase = phrase.erase();
    
    cout << "AFTER ERASE" << endl;

    cout << phrase << endl;
    return (0);
}