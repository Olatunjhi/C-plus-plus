#include <iostream>
using namespace std;

/**
 * main - Check the code
 * @phrase: string - To hold the phrase
 * @phlength: int - To hold phrase length
 * @statement: string - To hold statement after inserting
 * 
 * Description: using length function to get the length of the phrase with using insert function
 * to insert new word to the phrase
 * 
 * Return: Always 0.
 */

int main (void)
{
    string phrase;
    int phlength;
    string statement;

    phrase = "Let code";

    cout << "BEFORE INSERTING" << endl << phrase << endl << endl;

    phlength = phrase.length();

    statement = phrase.insert(phlength," together");

    cout << "AFTER INSERTING" << endl << statement << endl;

    return (0);
}