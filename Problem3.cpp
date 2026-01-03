#include <iostream>

// What is the largest prime factor of the number 600851475143 ?

void Problem3()
{
	long long pF = 2;
	long long largestPF = 2; // tracks biggest prime factor (just 2 at the beginning as the smallest)
	long long currentPF = 600851475143;

	while (currentPF != 1)
	{
		if (currentPF % pF == 0) // if it possible to divide
		{
			currentPF = currentPF / pF;

			if (pF > largestPF)
			{
				largestPF = pF; // update the largest prime factor
			}

			//std::cout << pF << std::endl; // print prime factor 

			pF = 2; // reset pF to 2 again 
		}
		else
		{
			pF++; // otherwise pF++ to try again with a bigger number pF
		}
	}

	std::cout << "Result: " << largestPF << std::endl;
}