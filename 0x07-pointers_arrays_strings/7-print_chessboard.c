#include "main.h"
#include <string.h>

/**
 * print_chessboard -> prints chessboard
 */

void print_chessboard(char (*a)[8])
{
	int d, i;

	for (d = 0; d < 8; d++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[d][i]);
		}

		_putchar('\n');
	}
}
