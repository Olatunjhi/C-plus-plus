#include <iostream>
#include <fstream>
using namespace std;

int main (void)
{
    string userWord;
    string word;
    string meaning;
    string choice;

    ifstream readData("dictionaryBase.txt");

    if (!readData.is_open())
    {
        cout << "File could not open for reading" << endl;
        return (1);
    }

    do
    {
        cout << "What word you want to find the meaning of?" << endl;
        cin >> userWord;

        readData.clear();
        readData.seekg(0);

        bool userWordFound = false;

        while(getline(readData,word,'-'), getline(readData,meaning))
        {
            if (userWord == word)
            {
                userWordFound = true;
                cout << " --> " << meaning << endl;
                break;
            }
        }

        if (!userWordFound)
        {
            cout << "The word you enter not yet in database. please enter another word" << endl;
        }

        cout << "Do you want to keep searching for meaning,(yes/no)" << endl;
        cin >> choice;

        if (choice != "yes")
        {
            break;
        }
    }
    while(true);

    readData.close();
    
    return (0);
}