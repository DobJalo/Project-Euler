#include <iostream>

// a < b < c
// a^2 + b^2 = c^2

//There exists exactly one Pythagorean triplet for which a+b+c=1000.
//Find the product abc.

void Problem9()
{
	int c;
	bool stop = false;

	for (int a = 0; a < 1000; a++) // check every a value
	{
		for (int b = 0; b < 1000; b++) // check every b value
		{
			c = sqrt(a * a + b * b); // find c using a^2 + b^2 = c^2
			
			// check if a^2 + b^2 = c^2 works and a, b and c are not 0
			if ((a * a + b * b == c * c) && a!= 0 && b!= 0 && c!=0)
			{
				if (a + b + c == 1000) // check if their sum is 1000
				{
					//std::cout << a << " " << b << " " << c << std::endl;
					std::cout << "Result: " << a * b * c << std::endl;
					stop = true;
					break;
				}
			}
		}

		if (stop)
		{
			break;
		}
	}
}


// начать с меньшего
// второй++
// посмотреть вычитание и использовать формулу для проверки

// если не подходит, то второй ++
// посмотреть вычитание и использовать формулу для проверки

// если не подходит, то первый ++ 
// начать с начала