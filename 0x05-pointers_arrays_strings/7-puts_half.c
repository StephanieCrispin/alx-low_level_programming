#include "main.h"
/**
 *puts_half -> Prints second half of a string
 *@str: A pointer argument
 */

void puts_half(char *str)
{
	int length = 0, middle, i;

	while (str[length] != '\0')
		length++;
	middle = length / 2;
	if ((length % 2) != 0)
		middle = middle + 1;

	for (i = middle; i <= length - 1; i++)
		_putchar(str[i]);

	_putchar('\n');
}
