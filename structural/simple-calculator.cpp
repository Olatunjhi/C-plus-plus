#include <iostream>

using namespace std;

float addition(float firstValue, float secondValue)
{
	return (firstValue + secondValue);
}

float subtraction(float firstValue, float secondValue)
{
	return (firstValue - secondValue);
}

float multiply(float firstValue, float secondValue)
{
	return (firstValue * secondValue);
}

float division(float firstValue, float secondValue)
{
	return (firstValue / secondValue);
}

int main()
{
	int whatTodo;
	float firstValue;
	float secondValue;
	float answer;
	int numberOfInput = 0;

	cout << "WELCOME TO SIMPLE CALCULATOR" << endl;
	cout << "NOTE, THIS CALCULATOR ONLY TAKE TWO VALUES AT A TIME" << endl << endl;

	while (numberOfInput < 1000)
	{
		performAgain:

		cout << "WHAT OPERATION DO YOU WANT TO PERFORM?" << endl;
		cout << "Select 1 for addition" << endl;
		cout << "select 2 for subtraction" << endl;
		cout << "select 3 for multiplication" << endl;
		cout << "select 4 for division" << endl;
		cout << "0 To off calculator" << endl;
		cin >> whatTodo;

		if (whatTodo == 0)
		{
			break;
		}
		else if (whatTodo < 0 || whatTodo > 5)
		{
			cout << endl;
			goto performAgain;
		}

		cout << "Enter the first value: ";
		cin >> firstValue;

		cout << "Enter the second value: ";
		cin >> secondValue;

		if (whatTodo == 1)
		{
			answer = addition(firstValue, secondValue);
			cout << "Addition of those two values is: " << answer << endl;
		}

		if (whatTodo == 2)
		{
			answer = subtraction(firstValue, secondValue);
			cout << "subtraction of those two values is: " << answer << endl;
		}

		if (whatTodo == 3)
		{
			answer = multiply(firstValue, secondValue);
			cout << "The product of those two values is: " << answer << endl;
		}

		if (whatTodo == 4)
		{
			answer = division(firstValue, secondValue);
			cout << "Division of those two values is: " << answer << endl;
		}

		cout << endl << endl;
		numberOfInput++;
	}

	return (0);
}
