#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	double a;
	double b;
	double c;
	double Aproduct;
	double c2;
	double numerator;
	double denomerator;
	double answer;

	cout << "Note: This calculator only works for this formular, ((a * a) - 2c) / b" << endl << endl;

	cout << "Enter value for a: ";
	cin >> a;

	cout << "Enter value for b: ";
	cin >> b;

	cout << "Enter value for c: ";
	cin >> c;

	Aproduct = pow(a,a);
	c2 = c * 2;
	numerator = Aproduct - c2;
	denomerator = b;
	answer = numerator / denomerator;

	cout << "Answer is: " << answer << endl;
	return (0);
}
