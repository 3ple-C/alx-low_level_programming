#include "main.h"

/**
* _abs - Computes the absolute value of an integer.
* @c: The number to be computed.
*
* Return: Absolute value or the number
*/
int _abs(int c)
{
	int x;

	if (c >= 0)
		x = c * 1;

	else if (c < 0)
		x = c * -1;

	return (x);
}
