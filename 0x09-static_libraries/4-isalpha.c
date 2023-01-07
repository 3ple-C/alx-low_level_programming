#include "main.h"

/**
 * _isalpha - Checks for letter input
 * @c: variable to be checked
 *
 * Return: 1 If letter letter is found and 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a' && c <= 'z')) || ((c >= 'A' && c <= 'Z')))
	{
		return (1);
	}

	return (0);
}
