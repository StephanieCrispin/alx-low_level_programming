#include "main.h"
#include <stdio.h>
/*
 *times_table -> A function that prints out the 9 times table
 */

void print_to_98(int n)
{
	int l;
	if (n == 98)
		putchar(n + '0');
	else if (n <= 0 || (n > 0 && n < 98))
	{
		for (l = n; l <= 98; l++)
			printf("%d, ", l);
	}
	else if (n > 98)
	{
		for (l = n; l >= 98; l--)
			printf("%d, ", l);
	}
}
