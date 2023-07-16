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
	int i=0;
	while(i < 9)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		i++;
	}

	putchar(9 + '0');
	return (0);
}
