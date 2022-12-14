#include "main.h"

/**
 * times_table - A function that prints the '9' times table
 */
void times_table(void)
{
	int x, y, k;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (y = 1; y <= 9; y++)
		{
			k = (x * y);

			if ((k / 10) > 0)
			{
				_putchar((k / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}

			_putchar((k % 10) + '0');

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
