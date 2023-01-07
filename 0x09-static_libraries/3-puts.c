#include "main.h"

/**
* _puts - function that prints a string, to stdout
* @str: string to print
*/
void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
