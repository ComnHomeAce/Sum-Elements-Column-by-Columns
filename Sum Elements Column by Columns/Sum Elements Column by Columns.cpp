// Sum Elements Column by Columns.cpp : This program returns the sum of all the elements in a specified column in a matrix.

#include <iostream>
using namespace std;

const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex)
{	
	//Declare variable to increment sum
	double sum = 0;

	//Loop to add array values by column
	for (int i = 0; i < rowSize; i++)
	{
		sum = sum + m[i][columnIndex]; //Loops rows, column fixed based on input
	}

	//Output the sum of the column
	return sum;
}
int main()
{
	//Declare array
	double array[3][4];

	//Print request for user input
	cout << "Enter a 3-by-4 matrix, row by row:\n";

	//Get array values
	for (int i = 0; i < 3; i++) //Loop through rows
	{
		for (int j = 0; j < 4; j++) //Loop through columns
		{	
			//Get array values
			cin >> array[i][j];
		}
	}

	cout << "\n";

	//Calculate column sums
	for (int j = 0; j < 4; j++) //Loops columns, rows looped and added in 'cumColumn' function
	{
		//Print column sums
		cout << "Sum of the elements at column " << j << " is " << sumColumn(array, 3, j) << "\n";
	}
}