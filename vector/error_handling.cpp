#include <iostream>
using namespace std;

/**
 * main - Check the code
 * @firstValue: float - To hold first value enter by the user
 * @secondValue: float - To hold first value enter by the user
 * @answer: float - To hold answer 
 * 
 * Description: making use of exceptional handling if user divide with 0 to
 * avoid run time error
 * 
 * Return: Always 0.
 */

int main (void)
{
    float firstValue;
    float secondValue;
    float answer;

    try
    {
        cout << "A quick division" << endl;

        cout << "Enter first value : ";
        cin >> firstValue;

        cout << "Enter second value : ";
        cin >> secondValue;

        if (secondValue == 0)
        {
            throw 0;
        }

        answer = firstValue / secondValue;

        cout << "Answer is : " << answer << endl;
    }
    catch(...)
    {
        cout << "An error has occured" << endl;
    }
    
    return (0);
}