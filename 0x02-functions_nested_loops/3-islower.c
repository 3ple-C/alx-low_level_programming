#include "main.h"

/**
 * _islower - Checks if a variable is a lowercase letter
 * @c: variable to be checked
 *
 * Return: 1 if true 0 if not
 */

int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
			return (1);
	}

	return (0);
}
