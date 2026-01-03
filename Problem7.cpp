#include <iostream>

// What is the 10 001st prime number?

void Problem7()
{
	int count = 1;
	long long currentNum = 2;
	bool prime = true;

	while(count < 10001) // stop at 10001 prime number
	{
		currentNum++; // go to the next number
		prime = true; // reset bool 

		for (int i = 2; i < currentNum; i++) // check if the number is a prime number
		{
			if (currentNum % i == 0) // if the number is not a prime number
			{
				prime = false;
				break;
			}
		}

		if (prime == true)
		{
			count++; // update the countdown
		}
	}

	std::cout << "Result: " << currentNum << std::endl;
}