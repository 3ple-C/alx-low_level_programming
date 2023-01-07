#include "main.h"

/**
* _strpbrk - checks for character of a substring in the main string
* @s: substring to be checked
* @accept: main string to be compared with substring
*
* Return: NULL if substring is not in main string
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}

			temp++;
		}

		s++;
	}

	return (NULL);
}
