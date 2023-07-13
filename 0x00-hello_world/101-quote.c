#include <unistd.h>

/**
 * main - Print characters to stderr without printf or puts
 *
 * Return: 1 If Success
 */

int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}
