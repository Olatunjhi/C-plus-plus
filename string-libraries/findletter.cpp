#include <iostream>
using namespace std;

int main (void)
{
    string statement;

    statement = "Coding is awesome";
    int length = statement.length();

    for (int i = 0; i < length; i++)
    {
        if (statement[i] == ' ')
        {
            cout << " word space" << endl;
            continue; 
        }

        cout << "index " << i << " stand for " << "---> " << statement[i] << endl;
    }
    return (0);
}