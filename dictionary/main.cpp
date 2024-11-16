#include <iostream>
#include <fstream>
using namespace std;

int main (void)
{
    string userWord;
    string word;
    string meaning;
    ifstream readData;
    readData.open("dictionaryBase.txt");

    if (readData.is_open())
    {
        performAgain:
        cout << "Which word you want to know it meaning" << endl;
        cin >> userWord;
        cin.ignore();

        while (getline(readData,word,'-'), getline(readData,meaning))
        {
            if (userWord == word)
            {
                cout << "--> " << meaning << "\n";
                goto performAgain;
            }
            else
            {
                cout << "please enter another word. The word you enter not yet in my data base" << endl;
                goto performAgain;
            }
        }
    }
    else
    {
        cout << "File could not be for reading" << endl;
    }

    readData.close();
    
    return (0);
}