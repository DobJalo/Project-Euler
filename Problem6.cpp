#include <iostream>

// Find the difference between the sum of the squares of the first one hundred natural numbers 
// and the square of the sum.

void Problem6()
{
	long long sumOfSquares = 0;
	long long sum = 0;
	long long squareOfSum = 0;

	//find the sum of the squares of the first one hundred natural numbers 
	for (int i = 1; i <= 100; i++)
	{
		sumOfSquares += i * i;
	}

	//std::cout << sumOfSquares << std::endl;

	//find the sum of all numbers from 1 to 100
	for (int i = 1; i <= 100; i++)
	{
		sum += i;
	}

	//std::cout << sum << std::endl;

	//find the square of the sum
	squareOfSum = sum * sum;

	//std::cout << squareOfSum << std::endl;

	std::cout << "Results: " << squareOfSum - sumOfSquares << std::endl;
}