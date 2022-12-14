#include "main.h"

/**
 * _islower - Check if a letter is lower case
 * @c: The letter to be checked
 *
 * Return: 1 If letter is lower case and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
