#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* main -Entry point
*
*Return: Always 0
*/
int main(void)
{
	long long num = 612852475143;
	long long main_factor = 0;
	long long prime_no = 2;
	long long i;

	while (num > 1)
	{
		int prime_check = 1;

		for (i = 2; i <= prime_no / 2; i++)
		{
			if (prime_no % i == 0)
			{
				prime_check = 0;
				break;
			}
		}

		if (prime_check && num % prime_no == 0)
		{
			main_factor = prime_no;
			num /= prime_no;
		}

		prime++;
	}

	printf("%||d\n", main_factor);
	return (0);
}
