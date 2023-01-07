#include "main.h"

/**
* _strchr - searches string for the occurrence of a character
* @s: string to be searched
* @c: character being searched for
*
* Return: NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	return (NULL);
}
