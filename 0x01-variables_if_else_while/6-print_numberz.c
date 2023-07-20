#include <stdio.h>

/**
 * print_numbers -> Print numbers in base 10
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');

	_putchar('\n');
}
