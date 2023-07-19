#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if true 0 it not
 */

int _isalpha(int c)
{
	int i, j;

	for (i = 97; i <= 122; i++)
	{
		for (j = 65; j <= 90; j++)
		{
			if (i == c || j == c)
				return (1);
		}
	}

	return (0);
}
