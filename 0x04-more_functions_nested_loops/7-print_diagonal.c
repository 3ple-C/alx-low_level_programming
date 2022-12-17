#include "main.h"

/**
* print_diagonal - prints a backslash on terminal
* @n: number of \ characters printed
*/
void print_diagonal(int n)
{
	int x, y, z;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				_putchar(' ');
			}
			for (z = 0; z < n; z++)
			{
				_putchar('\\');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
