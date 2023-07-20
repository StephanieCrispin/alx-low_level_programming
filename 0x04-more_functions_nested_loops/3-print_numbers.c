#include "main.h"

/**
 * main - Entry point
 *
 * Description: A C pogram that prints out all the single numbers in base 10
 *
 * Return: Always return 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');

	_putchar('\n');
	return (0);
}
