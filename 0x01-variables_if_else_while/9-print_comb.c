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
	int i;

	for (i = 0; i < 10; i++) {
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}

	return (0);
}
