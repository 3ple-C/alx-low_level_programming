#include "main.h"

/**
 * _atoi - convert string to integer.
 * @s: pointer to convert
 *
* Return: n integer
 */
int _atoi(char *s)
{
	int x = 0;
	unsigned int n = 0;
	int min = 1;
	int is_i = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			min *= -1;
		}

		while (s[x] >= 48 && s[x] <= 57)
		{
			is_i = 1;
			n = (n * 10) + (s[x] - '0');
			x++;
		}

		if (is_i == 1)
		{
			break;
		}

		x++;
	}

	n *= min;
	return (n);
}
