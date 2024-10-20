#include <iostream>
using namespace std;

int main (void)
{
    string name;
    char rposition;
    int findposition;

    cout << "Enter your full name : ";
    getline(cin, name);

    cout << "Check position of any character in your name from back, type it! : ";
    cin >> rposition;

    cout << endl;

    findposition = name.rfind(rposition) + 1;

    cout << "The character is at the position " << findposition << " in your name"<< endl;

    return (0);
}