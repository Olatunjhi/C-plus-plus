#include <iostream>
#include <cmath>

using namespace std;

float a;
float b;
float c;
float aSquare;
float c2;
float numirator;
float denomirator;
float answer;
float bFormulaEqualsTo;
	
void solveForA(float FET)
{
	float insideSquareRoot;
	float squareRoot;
	float positiveAnswer;
	float negativeAnswer;

	cout << "Enter value for B : ";
	cin >> b;
	
	cout << "Enter value for C : ";
	cin >> c;

	c2 = c * 2;
	bFormulaEqualsTo = b * FET;
	insideSquareRoot = bFormulaEqualsTo + c2;
	squareRoot = sqrt(insideSquareRoot);
	positiveAnswer = squareRoot;
	negativeAnswer = squareRoot;

	cout << "Answer is : " << positiveAnswer << " or " << -negativeAnswer << endl;
}

void solveForC(float FET)
{
	cout << "Enter value for A : ";
	cin >> a;

	cout << "Enter value for B : ";
	cin >> b;
	
	aSquare = pow(a,2);
	bFormulaEqualsTo = b * FET;
	numirator = aSquare - bFormulaEqualsTo;
	denomirator = 2;
	answer = numirator / denomirator;

	cout << "Answer is : " << answer << endl;
	
}

void solveForB(float FET)
{
	cout << "Enter value for A : ";
	cin >> a;

	cout << "Enter value for C : ";
	cin >> c;

	aSquare = pow(a,2);
	c2 = c * 2;
	numirator = aSquare - c2;
	denomirator = FET;
	answer = numirator / denomirator;

	cout << "Answer is : " << answer << endl;
}

int main(void)
{
	float formulaEqualsTo;
	char solveFor;

	cout << "This calculator works for when solving for any qudratic coefficient, only for this formula ((a * a) - 2c) / b" << endl << endl;

	cout << "Your formula equals to what? : ";
	cin >> formulaEqualsTo;

	cout << "What to do you want to solve for, a or b or c : ";
	cin >> solveFor;

	if (solveFor == 'a')
	{
		solveForA(formulaEqualsTo);
	}

	if (solveFor == 'b')
	{
		solveForB(formulaEqualsTo);
	}

	if (solveFor == 'c')
	{
		solveForC(formulaEqualsTo);
	}

	return (0);
}
