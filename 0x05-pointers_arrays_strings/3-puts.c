#include "main.h"
/**
 *swap_int -> Updates the value of pointer
 *@str: A pointer argument
 *Return: returns 1 or 0 based on argument
 */

void _puts(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
