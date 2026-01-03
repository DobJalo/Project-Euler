#include <iostream>

//Find the sum of all the multiples of 3 or 5 below 1000.

void Problem1()
{
    int sum = 0;

    for (int i = 0; i < 1000; i++) // if natural number is below 1000 (not including 1000)
    {
        if (i % 3 == 0 || i % 5 == 0) // if natural number multiplies of 3 or 5
        {
            sum = sum + i; // add to total sum
        }
    }

    std::cout << sum << std::endl;
}