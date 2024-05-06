#include <iostream>

using namespace std;

int main(void)
{
	int valueInFeet;
	int performAgain;
	
	DoItAgain:

	cout << "Enter your value in feet: ";
	cin >> valueInFeet;

	if (valueInFeet > 6)
	{
		cout << "According to your feet you are a tall person" << endl;
	}
	else if (valueInFeet < 5)
	{
		cout << "According to your feet you are a short person" << endl;
	}
	else
	{
		cout << "According to your feet you are a average person" << endl;
	}

	cout << "Enter 1 to check again (or 0 to quit): ";
	cin >> performAgain;

	if (performAgain == 1)
	{
		goto DoItAgain;
	}
	else
	{
		exit(0);
	}

	return (0);
}
