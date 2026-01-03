#include <iostream>

// What is the smallest positive number that is evenly divisible (without any remainder)
// by all of the numbers from 1 to 20?


void Problem5()
{
	long long smallestNum = 20;
	int count = 1;

	while (count != 21)
	{
		for (count = 1; count <= 20; count++) // check if the number divides by every number from 1 to 20
		{
			if (smallestNum % count != 0) 
			{
				// if it does not then check the next number
				smallestNum++;
				break;
			}
		}
	}

	std::cout << "Result: " << smallestNum << std::endl;
	
}