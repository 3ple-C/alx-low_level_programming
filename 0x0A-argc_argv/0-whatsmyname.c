#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
* @argc: number command line arguments passed
* @argv: array of string value of command line arguments
*
* Return: 0, Success
*/
int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
