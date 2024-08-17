#include <iostream>

using namespace std;

void passByValue(int age)
{
	age = 40;

	cout << "Your pass-by-value age is : " << age << endl;
}

void passByRefrence(int& age)
{
	age = 40;

	cout << "Your pass-by-refrence age is : " << age << endl;
}

int main(void)
{
	int choosen;
	int age;

	cout << "To run pass-by-value enter ---> 1 " << endl << "To-run-pass by reference enter ---> 2" << endl;
	cin >> choosen;

	if (choosen == 1)
	{
		cout << "Seems you choose by pass value" << endl;

		cout << "Enter your age" << endl;
		cin >> age;

		passByValue(age);	
		cout << "Your age is : " << age << endl;
	}

	if (choosen == 2)
	{
		cout << "Seems you choose pass-by-refrence" << endl;

		cout << "Enter your age :";
		cin >> age;
		

		passByRefrence(age);
		cout << "Your age is : " << age << endl;
		
	
	}
	return (0);
}
