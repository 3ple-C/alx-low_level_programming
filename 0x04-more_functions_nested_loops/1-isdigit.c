#include "main.h"

/**
 * _isdigit - Checks if input is a number from 0-9
 * @c: Input to be checked
 *
 * Return: 0 If input is not a number
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	
		return (0);
}
