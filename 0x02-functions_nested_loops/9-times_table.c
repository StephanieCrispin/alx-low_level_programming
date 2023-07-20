#include "main.h"

/*
 *9-times_table -> A function that prints out the 9 times table
 */

void times_table(void)
{
	int i, j, l;

	for (i = 0; i <= 9; i++)
	{
		_putchar('\n');
		for (j = 0; j <= 9; j++)
		{
			i = i % 10;
			l = j * i;

			_putchar((l) + '0');
			if (!(j == 9 && (l % 9 == 0)))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
	}
}
