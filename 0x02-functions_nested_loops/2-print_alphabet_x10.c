#include "main.h"

/**
* print_alphabet_x10(void) -> Prints "alphabest*10"
*/

void print_alphabet_x10(void)
{
	int j = 0, i;

	while (j < 10)
	{
		i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}

}
