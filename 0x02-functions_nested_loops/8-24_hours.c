#include <stdio.h>
/**
 *times_table -> Returns every minute in a day
 */
void jack_bauer(void)
{

	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(':');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i < 98 || j < 99)
			{
				putchar('\n');
			}
		}
	}

	putchar('\n');
}
