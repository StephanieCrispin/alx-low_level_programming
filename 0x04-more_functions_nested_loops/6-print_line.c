#include "main.h"
/**
 * print_line -> prints a straight line in the console
 */
void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
