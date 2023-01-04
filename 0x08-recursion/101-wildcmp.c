#include "main.h"

/**
* wildcmp - comparestwo strings for identical characters
* @s1: string 1
* @s2: string 2
*
* Return: 0 if no identical string is found
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == '\0' || *s2 == '\0')
	{
		return (0);
	}

	if (*s1 == *s2 || *s2 == '*')
	{
		return (wildcmp(s1 + 1, s2 + 2));
	}

	return (0);
}
