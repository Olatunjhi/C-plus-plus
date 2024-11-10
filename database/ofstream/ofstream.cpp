#include <iostream>
#include <fstream>
using namespace std;

/**
 * main - check the code
 * @dataBase: object - To open file
 * @fromUser: string - To collect information
 * 
 * Description: using tellp() function to locate writing pointer position and seekp() function
 * to change location
 * 
 * Return: Always 0.
 */
int main (void)
{
    ofstream dataBase("dataBaseFile.txt");
    string fromUser;

    if (dataBase.is_open())
    {
        cout << "What do you what to save" << endl;
        getline(cin,fromUser);
        dataBase << fromUser;
        
        cout << "The writing pointer is at number " << dataBase.tellp();
        cout << " if you count the characters in your statement from begining with zero" << endl;

        //changing writing pointer position
        dataBase.seekp(0);

        //new writing pointer position
        cout << "The writing pointer is now at number " << dataBase.tellp() << endl;
    }
    else
    {
        cout << "File is not open" << endl;
    }

    dataBase.close();

    return (0);
}