#include <iostream>

using namespace std;

struct firstSemeter
{
	int mathScore;
	int englishScore;
	int physicsScore;
};

void displayData(firstSemeter student1)
{
	cout << "Student1 math score is: " << student1.mathScore << endl;
	cout << "stundent1 english score is: " << student1.englishScore << endl;
	cout << "student1 physics score is: " << student1.physicsScore << endl;
}

void collectData()
{
	firstSemeter student1;

	cout << "Enter Math score for student1: ";
	cin >> student1.mathScore;

	cout << "Enter English score for student1: ";
	cin >> student1.englishScore;

	cout << "Enter Physics score for student1: ";
	cin >> student1.physicsScore;

	displayData(student1);
}

int main()
{
	collectData();

	return (0);
}
