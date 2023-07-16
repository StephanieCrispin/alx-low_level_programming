#include <stdio.h>

/**
* main - Entry point
*
* Description: A C program that prints out base ten numbers
*
* Return: Always return 0
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
		if (i <= 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
putchar('\n');
	return (0);
}
