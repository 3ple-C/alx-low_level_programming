#include "main.h"

/**
* _strstr - finds the first occurrence of a substring in main string
* @haystack: main string to be checked
* @needle: substring to be compared with main string
*
* Return: Null if substring is not in main string
*/
char *_strstr(char *haystack, char *needle)
{
	while (*needle != '\0')
	{
		char *temp = haystack;

		while (*temp != '\0')
		{
			if (*needle == *temp)
			{
				return (needle);
			}

			temp++;
		}

		needle++;
	}

	return (NULL);
}
