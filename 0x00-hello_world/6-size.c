#include <stdio.h>

/**
 * main - Prints the size of various data types
 *
 * Return: Always 0. Success
 */

int main(void)
{
	int n;
	char c;
	int i;
	long long int k;
	float f;

	printf("Size of an int: %d byte(s)\n", sizeof(n));
	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
