#include "main.h"

/**
* _sqrt_recursion_try - find the natural square root of a number
* @n: number of which to find square root
* @guess: perfect square of number
*
* Return: natural sqare root of number
*/
int _sqrt_recursion_try(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (_sqrt_recursion_try(n, guess + 1));
}

/**
* _sqrt_recursion - calls _sqrt_recursion_try function
* @n: number given to find square root
*
* Return: _sqrt_recursion_try function
*/
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_try(n, 1));
}
