#include <iostream>

// What is the value of the first triangle number to have over five hundred divisors?

void Problem12()
{
	long long currentTriangle=0;
	int divisorsNumber = 1; // start with 1 to inclide divisor that is currentTriangle itself

	for (long long i = 1; divisorsNumber <= 500; i++)
	{
		divisorsNumber = 1; // reset to 1 again
		currentTriangle += i; // get the next triangle number

		long long limit = sqrt(currentTriangle); 
		for (long long divisor = 1; divisor <= limit; divisor++) // count all the divisors
		{
			if (currentTriangle % divisor == 0)
			{
				if (divisor * divisor == currentTriangle) // do not include extra one if both divisors are the same number
				{
					divisorsNumber++; 
				}
				else
				{
					divisorsNumber += 2; // automatically include divisors that are > than sqrt(currentTriangle)
				}
			}
		}
	}

	std::cout << "Result: " << currentTriangle << std::endl;
}