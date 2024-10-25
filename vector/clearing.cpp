#include <iostream>
#include <vector>
using namespace std;

/**
 * main - Check the code
 * @floatVector: float - vector float
 * 
 * Description: claering vector after inserting
 * 
 * Return: Always 0.
 */

int main (void)
{
    vector <float> floatVector;

    //inserting
    floatVector.push_back(7.9);
    floatVector.push_back(9.7);
    floatVector.push_back(23.9);

    cout <<"BEFORE CLEARING" << endl << "The size is " << floatVector.size() << endl;

    //clearing vector
    floatVector.clear();

    cout << "AFTER CLEARING" << endl << "The size is " << floatVector.size() << endl;

    return (0);
}