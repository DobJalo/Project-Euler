#include <iostream>

// Starting in the top left corner of a 2x2 grid, and only being able to move to the right and down,
// there are exactly 6 routes to the bottom right corner.

// How many such routes are there through a 20x20 grid?

void Problem15()
{
	long long myMatrix[21][21];

	// number of rows/columns
	int matrixLength = sizeof(myMatrix) / sizeof(myMatrix[0]);

	// Core logic: how many ways can you get into each cell?

	// there is only way to get into any of the first rows and first columns
	// -> fill their values with 1
	for (int i = 0; i < matrixLength; i++)
	{
		myMatrix[i][0] = 1;
		myMatrix[0][i] = 1;
	}

	// then each cell = cell above it + cell to the left
	for (int i = 1; i < matrixLength; i++)
	{
		for (int j = 1; j < matrixLength; j++)
		{
			myMatrix[i][j] = myMatrix[i - 1][j] + myMatrix[i][j - 1];
		}
	}

	std::cout << "Result: " << myMatrix[20][20];
}