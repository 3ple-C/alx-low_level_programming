#include <stdio.h>

/**
* main - Entry point. Prints single digits from 0-9.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}

	printf("\n");

	return (0);
}

