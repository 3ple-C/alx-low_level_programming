#include "main.h"

/**
* is_prime_recursive - checks if given number is a prime number
* @n: given to number to check
* @divisor: value to carry out check on main number
*
* Return: 1 if number is prime
*/
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
		return (0);

	if ((divisor * divisor) > n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_recursive(n, divisor + 1));
}

/**
* is_prime_number - calls is_prime_recursive function
* @n: given number
*
* Return: called function
*/
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
