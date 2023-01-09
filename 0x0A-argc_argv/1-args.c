#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point, prints number of arguments passed
* @argc: number of argument passed
* @argv: array of arguments
*
* Return: 0, Success
*/
int main(int argc, char *argv[])
{
	int i, sum;

	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", argc - 1);

	return (0);
}
