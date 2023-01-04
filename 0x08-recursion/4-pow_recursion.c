#include "main.h"

/**
* _pow_recursion - finds value of number raised to power of another number
* @x: number to be raised to power of another number
* @y: power of first number
*
* Return: x raised to power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
