#include <iostream>

// Find the sum of all the primes (2, 3, 5, 7...) below two million.

void Problem10()
{
	long long sum = 0;
	int current = 2000000;
	bool prime = true;;

	while (current > 1)
	{
		prime = true; // reset the value

		// check if the number is a prime number
		// idea: if a number has a divisor greater than a certain value,
		// then the second divisor will necessarily be less than this value
		for (int i = 2; i <= floor(sqrt(current)); i++)
		{
			if (current % i == 0) // not a prime number
			{
				prime = false;
				break;
			}
		}

		if (prime)
		{
			//std::cout << current << std::endl;
			sum += current;
		}

		current--;
	}

	std::cout << "Result: " << sum << std::endl;
}