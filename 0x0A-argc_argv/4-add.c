#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
* main - Entry point, adds positive integers passed as argument
* @argc: number of integer arguments passed
* @argv: array of integer argument passed
*
* Return: 0, If Success. 1 If not
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *p = argv[i];

		while (*p)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}

			p++;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
