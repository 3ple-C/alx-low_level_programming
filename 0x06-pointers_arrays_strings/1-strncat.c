#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: string 1
* @src: string 2
* @n: string2 count
*
* Return: final result of dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	

	if (j >= n)
	{
		for (; j <= n; j++)
		{
			while (src[j] != '\0')
			{
				dest[i] = src[j];
				i++;
				j++;
			}
		}
	}

	dest[i] = '\0';

	return (dest);
}
