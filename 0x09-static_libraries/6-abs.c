#include "main.h"

/**
 * _abs - Finds absolute value of an integer
 * @b: Integer input
 *
 * Return: Absolute value of b
 */
int _abs(int b)
{
	return (b * ((b > 0) - (b < 0)));
}
