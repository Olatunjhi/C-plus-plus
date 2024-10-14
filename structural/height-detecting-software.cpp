#include <iostream>

using namespace std;

string heightDetector(float heightInFeet)
{
	if (heightInFeet > 6)
	{
		return ("tall");
	}
	else if (heightInFeet < 5)
	{
		return ("short");
	}
	else
	{
		return ("average");
	}
}

int main(void)
{
	float heightInFeet;
	int performAgain;
	string result;
	
	DoItAgain:

	cout << "Enter your value in feet: ";
	cin >> heightInFeet;

	if (heightInFeet <= 0)
	{
		cout << "Please enter valid height value in feet: ";
		cin >> heightInFeet;
	}
	
	result = heightDetector(heightInFeet);

	cout << "You are " << result << endl;

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
