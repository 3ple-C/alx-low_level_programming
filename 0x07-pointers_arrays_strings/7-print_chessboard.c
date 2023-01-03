#include "main.h"

/**
* print_chessboard - prints chessboard to stdout
* @a: number rows for array
*/
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	unsigned char chess[*a][8];

	for (i = 0; i < *a; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(chess[i][j] + '0');
		}

		_putchar('\n');
	}
}
