#include <iostream>
/*
n -> n/2 (n is even)
n -> 3*n + 1 (n is odd)

Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.*/



void Problem14()
{

	long long chainLength = 1;
	long long maxLength = 0;
	long long startingNumber = 1000000; // 1 000 000
	long long currentNumber;
	long long result = 0;

	currentNumber = startingNumber;

	while (startingNumber != 1) // check every number below 1 000 000
	{
		if (currentNumber % 2 == 0) // n -> n/2 (n is even)
		{
			currentNumber /= 2;
			chainLength++; // increase chain length
		}
		else
		{
			currentNumber = 3 * currentNumber + 1; // n -> 3*n + 1 (n is odd)
			chainLength++; // increase chain length
		}

		if (currentNumber == 1) // if minimum was reached
		{
			if(chainLength>maxLength) // compare current chain length with max chain length
			{ 
				maxLength = chainLength; // update max chain length
				result = startingNumber; // since max chain length was updated, save current starting number
			}

			chainLength = 0; // reset to 0
			startingNumber--; // get next number to start with
			currentNumber = startingNumber; // reset currentNumber as well
		}
	}

	std::cout << "Result: " << result << std::endl;
}
