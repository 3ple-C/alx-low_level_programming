#include "main.h"

/**
* _memcpy - copies a number of bytes from memory area to another
* @dest: memory area destination of copied bytes
* @src: memory area to be copied
* @n: number of bytes to copy from memory area
*
* Return: a pointer dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
