#include <iostream>
#include <fstream>
using namespace std;

/**
 * main - Check the code
 * @familyData: ofstream - object of ofstream class
 * @familyAges: string - To store family age
 * @members: int - To know how many member of the family
 * @readFamilyData: ifstream - object of ifstream class
 * @retrieveFromFile: To store what read from file
 * 
 * Description: creating file with ofstream and reading file with ifstream function in a single file
 * 
 * Return: Always 0.
 */

int main (void)
{
    ofstream familyData("familyData.txt");
    string familyAges;
    
    int members;

    if (familyData.is_open())
    {
        cout << "How many members in your family : ";
        cin >> members;

        cin.ignore();
        cout << "Enter family member age\n";

        for (int i = 0; i < members; i++)
        {
            getline(cin, familyAges);
            familyData << familyAges << "\n";
        }
    }
    else
    {
        cout << "The file could not be open for writing" << endl;
    }

    familyData.close();

    ifstream readFamilyData("familyData.txt");
    string retrieveFromFile;

    if (readFamilyData.is_open())
    {
        cout << "\nFamily member age from file:\n";
        for (int i = 0; i < members; i++)
        {
            getline(readFamilyData, retrieveFromFile);
            cout << retrieveFromFile << "\n";
        }
    } 
    else
    {
        cout << "The file could not be open for reading" << endl;
    }
    readFamilyData.close();

    return (0);
}