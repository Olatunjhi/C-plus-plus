#include <iostream>

using namespace std;

int main()
{
	int matrix1[3][2];
	int matrix2[3][2];

	cout << "Welcome to 3 by 2 matrix calculator" << endl;

	//input values for first matrix
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 2; y++)
		{
			cout << "Enter value for matrixA " << x << y << endl;
			cin >> matrix1[x][y];
		}
	}

	cout << endl << endl;

	cout << "You about to enter values for second matrix" << endl;

	//input values for second matrix
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 2; y++)
		{
			cout << "Enter value for matrixB " << x << y << endl;
			cin >> matrix2[x][y];
		}
	}

	cout << endl;
	
	//addition of both matrixs
	cout << "Addition of matrix1 and matrix2" << endl;

	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 2; y++)
		{
			int summation = matrix1[x][y] + matrix2[x][y];

			cout << summation << " ";
		}

		cout << endl;
	}

	return (0);
}
