#include <iostream>
using namespace std;

/**
 * main - Check the code
 * @test: string - To hold the text
 * @substring: string - To hold substring
 * @getindex: int - To hold "a" index
 * @getcount: int - To hold the count of word
 * 
 * Description: using substring function to get out word from text
 * 
 * Return: Always 0.
 */

int main (void)
{
    string text;
    string substring;
    int getindex;
    int getcount;

    text = "Code is awesome";

    cout << "Text contains " << text << endl << endl;

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == 'a')
        {
            getindex = i;

            getcount = text.length() - i;
            break;
        }
    }
    
    substring = text.substr(getindex, getcount);
    cout << "I take out this from text : " << substring << endl;

    return (0);
}