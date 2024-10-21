#include <iostream>
using namespace std;

int main (void)
{
    string statement;
    int slength;
    string inserting;

    statement = "Let code";

    cout << "BEFORE INSERTING" << endl << statement << endl << endl;

    slength = statement.length();

    inserting = statement.insert(slength," together");

    cout << "AFTER INSERTING" << endl << inserting << endl;

    return (0);
}