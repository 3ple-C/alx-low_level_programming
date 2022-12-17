#include "main.h"

/**
* print_diagonal - prints a backslash on terminal
* @n: number of \ characters printed
*/
void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		if (n > 0)
		{
			for (y = 0; y < n; y++)
			{
				_putchar('\\');
			}
		}
		else
		{
			_putchar('\n');
		}

		_putchar('\n');
	}
}
