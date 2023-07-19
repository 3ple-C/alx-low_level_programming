#include "main.h"

/**
* times_table - Prints the 9 times table, starting from 0
*
* Return: void
*/

void times_table(void)
{
	int x, y, z, n, s;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;

			if (z > 9)
			{
				n = z % 10;
				s = (z - n) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(s + '0');
				_putchar(n + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(z + '0');
			}
		}

		_putchar('\n');
	}
}

