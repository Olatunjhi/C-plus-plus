#include <iostream>
using namespace std;

void displayData(int p[])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "index number " << i << " has " << p[i] << endl;
    }
}

int main (void)
{
    int *y = nullptr;

    y = new int[4];

    y[0] = 7;
    y[1] = 9;
    y[2] = 5;
    y[3] = 8;

    displayData(y);

    delete [] y;

    return (0);
}