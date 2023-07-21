#include "main.h"
/**
 * print_square -> prints a square line in the console
 * @size: an integer argument
 */
void print_square(int size)
{
	int i, j;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			_putchar('\n');
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
