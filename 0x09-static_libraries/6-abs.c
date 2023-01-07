#include "main.h"

/**
 * _abs - Finds absolute value of an integer
 * @b: Integer input
 *
 * Return: Absolute value of b
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
