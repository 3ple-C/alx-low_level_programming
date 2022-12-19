#include "main.h"

/**
* swap_int - Swaps value of two integers
* @a: First integer to swap
* @b: Second integer to swap
*/
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
