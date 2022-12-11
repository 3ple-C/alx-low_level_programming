#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char size_a;
	int size_b;
	long size_c;
	long long size_d;
	float size_e;

	printf("Size of a char: %zu byte(s) \n", sizeof(size_a));
	printf("Size of an int: %zu bytes(s) \n", sizeof(size_b));
	printf("Size of a long int: %zu byte(s) \n", sizeof(size_c));
	printf("Size of a long long int: %zu byte(s) \n", sizeof(size_d));
	printf("Size of a float: %zu byte(s) \n", sizeof(size_e));

	return (0);
}
