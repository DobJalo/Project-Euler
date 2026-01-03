#include <iostream>

//By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
// find the sum of the even-valued terms.

void Problem2()
{
	long long firstNum=0;
	long long secondNum=1;
	long long sum = 0;

	while (firstNum + secondNum <= 4000000) // check if the sum of two does not exceceed 4 million
	{
		long long thirdNum = firstNum + secondNum; // find the next number

		if (thirdNum % 2 == 0)
		{
			sum += thirdNum; // add to the sum if the number is even
		}

		//std::cout << "First: " << firstNum << " Second: " << secondNum << " Their sum: " << thirdNum << " Total sum: " << sum << std::endl;

		// update new numbers
		firstNum = secondNum;
		secondNum = thirdNum;
	}

	std::cout << "Result: " << sum << std::endl;
}