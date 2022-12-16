#include "main.h"

/**
 * print_most_numbers - prints numberrs 0-9 except 2 & 4
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x == 50 || x == 52)
		{
			continue;
		}

		_putchar(x);
	}

	_putchar('\n');
}
