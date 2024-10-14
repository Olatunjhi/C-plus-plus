#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
	srand(time(0));
	int userValue;
	int magicNumber;

	cout << "Welcome to gaming software" << endl;
	
	for (int i = 0; i < 1000; i++)
	{
		magicNumber = rand() % 10;
		performAgain:
		cout << "Choose from 0 to 10 to win a jakpot ";
		cin >> userValue;

		if (userValue < 0 || userValue > 10)
		{
			goto performAgain;
		}

		if (userValue == magicNumber)
		{
			cout << "YOU WON A JAKPOT!!" << endl;
			break;
		}
		else
		{
			cout << "YOU LOSE, CHOOSE AGAIN IT MIGHT BE YOUR TURN NOW" << endl;
		}
	}


	return (0);
}
