#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point, multiplies two numbers
* @argc: number of args passed
* @argv: array of arguments
*
* Return: 0, if Success, else 1
*/
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
	}

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", mul);

	return (0);
}
