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

	cout << "Welcome to simple calculator" << endl;
	cout << "Note, this calculator only take two values at a time" << endl << endl;

	while (numberOfInput < 1000)
	{

		cout << "what operation do you want to perform?" << endl;
		cout << "Select 1 for addition" << endl;
		cout << "select 2 for subtraction" << endl;
		cout << "select 3 for multiplication" << endl;
		cout << "select 4 for division" << endl;
		cin >> whatTodo;

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

		cout << endl;

		cout << "Enter 0 to off the calculator or 5 to continue: ";
		cin >> whatTodo;

		if (whatTodo == 0)
		{
			break;
		}
		else
		{
			numberOfInput++;
		}


	}

	return (0);
}
