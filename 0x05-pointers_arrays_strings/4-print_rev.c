#include "main.h"
/**
 *_puts -> Prints out strings to stdout
 *@str: A pointer argument
 *Return: returns 1 or 0 based on argument
 */

void print_rev(char *s)
{
	int i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
		c++;

	for (i = c - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}