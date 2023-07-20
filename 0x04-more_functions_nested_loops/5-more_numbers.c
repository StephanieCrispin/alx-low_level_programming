#include "main.h"

/**
 *more_numbers -> Prints numbers from 0 - 9 except 2 and 4
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j >= 10)
			{
				putchar(j / 10 + '0');
			}
			putchar(j % 10 + '0');
			j++;
		}
		putchar('\n');
		i++;
	}
	putchar('\n');
}
