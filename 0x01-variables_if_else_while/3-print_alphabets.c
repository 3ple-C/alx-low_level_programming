#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}

	return (0);
}
