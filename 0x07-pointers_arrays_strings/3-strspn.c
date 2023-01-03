#include "main.h"

/**
* _strspn - counts the number of substrings in a string
* @s: substring to be counted
* @accept: main string to be compared with substring
*
* Return: the number of substrings counted
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				count++;
				break;
			}

			temp++;
		}

		if (*temp == '\0')
		{
			break;
		}

		s++;
	}

	return (count);
}
