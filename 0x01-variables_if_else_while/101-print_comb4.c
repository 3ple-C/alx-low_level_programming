#include <stdio.h>

/**
* main - Entry point.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int c, i, j;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				if (c < i && i < j)
				{
					putchar(c);
					putchar(i);
					putchar(j);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
