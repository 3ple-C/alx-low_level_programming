#include "main.h"

 /**
  * print_alphabet - Prints lowercase alphabets with putchar
  */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
