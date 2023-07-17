#include <stdio.h>

/**
*main - Entry point
*
*Description - A C program that prints out all posible combination of numbers
*
*Return: Always return 0
*/
int main(void)
{
int i, k, j;
for (i = '0'; i <= '7'; i++)
{
	for (k = '0'; k <= '8'; k++)
	{
			for (j = '0'; j <= '9'; j++)
			{
			if (i < k && k < j)
				{
				putchar(i);
				putchar(k);
				putchar(j);
				if (i != '7' || (i == '7' && k == '8' && j != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	}
}
putchar('\n');
return (0);
}
