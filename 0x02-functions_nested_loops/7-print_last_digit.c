#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @x: last digit of number
 *
 * Return: Always 0
 */ 
int print_last_digit(int x)
{
	int y;

	y = (x % 10);
	
	if (y > 0)
	{
		y = (-1 * y);
	}

	_putchar(y + '0');
	return (y);
}
