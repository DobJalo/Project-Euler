#include <iostream>
#include <string>

// Find the largest palindrome made from the product of two 3-digit numbers.

std::string ReverseString(std::string reversed)
{
	reverse(reversed.begin(), reversed.end());

	return reversed;
}

void Problem4()
{
	int currentMult;
	int largestPalindrome = 0;

	for (int firstNum = 100; firstNum < 1000; firstNum++)
	{
		for (int secondNum = 100; secondNum < 1000; secondNum++)
		{
			currentMult = firstNum * secondNum; // get multiplication
			
			std::string reversed = ReverseString(std::to_string(currentMult)); // get reversed number

			// check if the number is palindrome and update the largest palindrome
			if (reversed == std::to_string(currentMult) && largestPalindrome<currentMult)
			{
				//std::cout << currentMult << std::endl;
				largestPalindrome = currentMult;
			}
		}
	}

	std::cout << "Result: " << largestPalindrome << std::endl;
}