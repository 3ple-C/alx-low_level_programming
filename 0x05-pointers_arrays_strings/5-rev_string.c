#include "main.h"

/**
* rev_string - function that reverses a string
*@s: string to reverse
*/
void rev_string(char *s)
{
	int i, c, k;
	char *a, rev;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		rev = s[i];
		s[i] = *a;
		*a = rev;
		a--;
	}
}


