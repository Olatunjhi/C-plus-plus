#include <iostream>

using namespace std;

int main()
{
	int input[1000];
	int numberOfInput = 0;
	int total = 0;

	cout << "Welcome to mean calculator" << endl;

	cout << "Enter the first value ";
	cin >> input[numberOfInput];

	while (numberOfInput < 1000)
	{
		total += input[numberOfInput];
		numberOfInput++;

		cout << "Enter the next value or enter 0 to get your answer" << endl;
		cin >> input[numberOfInput];

		if (input[numberOfInput] == 0)
		{
			break;
		}

	}

	cout << "The summation of those value is: " << total << endl;
	cout << "The number of input is: " << numberOfInput << endl;
	cout << "The average of those number is: " << total / numberOfInput << endl;

	return (0);
}
