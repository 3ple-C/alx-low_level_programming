#include "main.h"

/**
 * print_sign - Prints sign of a number
 * @n: Number with sign
 *
 * Return: 0 If any other condition isnt met
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
