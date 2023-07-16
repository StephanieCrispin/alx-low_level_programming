#include <stdio.h>

/**
* main - Entry point
*
* Description: A C program that prints the hexadecimal number system
*
* Return: Always return (0)
*/

int main(void)
{
	int i;
	int k;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	for (k = 'a'; k <= 'f'; k++)
		putchar(k);

putchar('\n');
	return 0;
}
