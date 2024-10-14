#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	float a;
	float b;
	float c;
	float squareRoot;
	float bsquare;
	float ac4;
	float insideRoot;
	float negativeB;
	float positiveNumerator;
	float negativeNumerator;
	float denominator;
	float firstAnswer;
	float secondAnswer;

	cout << "Welcome to quadratic calculator" << endl;

	cout << "Enter the value of a: ";
	cin >> a;

	cout << "Enter the value of b: ";
	cin >> b;

	cout << "Enter the value of c: ";
	cin >> c;

	bsquare = pow(b,2);
	ac4 = a * c * 4;
	insideRoot = bsquare - ac4;
	squareRoot = sqrt(insideRoot);
	negativeB = -b;
	denominator = a * 2;
	positiveNumerator = negativeB + squareRoot;
	negativeNumerator = negativeB - squareRoot;
	firstAnswer = positiveNumerator / denominator;
	secondAnswer = negativeNumerator / denominator;

	cout << "Your answer is: " << firstAnswer << "   or    " << secondAnswer << endl;

	return (0);
}
