#include "main.h"

/**
 * _isupper - Checks for an uppercase letter
 * @c: input to be checked
 *
 * Return: 0 if input is not a letter
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
