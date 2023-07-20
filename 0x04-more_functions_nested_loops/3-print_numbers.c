#include "main.h"

/**
 * print_numbers -> Prints numbers from 0 - 9
 *
 * Description: A C pogram that prints out all the single numbers in base 10
 *
 * Return: Always return 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');

	_putchar('\n');
}
