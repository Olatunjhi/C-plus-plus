#include <iostream>

using namespace std;

int main(void)
{
	double result;
	double input;

	cout << "Welcome to simple subtraction calculator" << endl << endl;

	cout << "Input the first value (or -1 to quit): ";
	cin >> input;

	cout << endl;

	result = input;

	while (input != -1)
	{
		cout << "Input the next value (or -1 to quit and get your answer): ";
		cin >> input;

		cout << endl;

		if (input == -1)
		{
			break;
		}

		result -= input;
	}

	cout << "The final answer is: " << result << endl;

	return (0);
}
