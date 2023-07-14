#include <stdio.h>

/**
* main - Entry point. Prints single digit numbers from 0-9.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}

