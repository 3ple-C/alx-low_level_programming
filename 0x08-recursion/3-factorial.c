#include "main.h"

/**
  * _pow_recursion - Returns the number of x raised to the power of y
  * @x: the number to multiply
  * @y: the times to multiply the number
  *
  * Return: The number multiplied y number of times
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

