#include "main.h"

/**
* _memset - fills initial bytes of memory area with constant byte
* @s: memory area to be filled
* @b: constant byte to be put in memory area
* @n: number of bytes to be filled
*
* Return: pointer to memory area (s)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
