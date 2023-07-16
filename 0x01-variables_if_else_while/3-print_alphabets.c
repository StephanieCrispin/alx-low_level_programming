#include <stdio.h>

/**
* main - Entry point
*
* Description: A C program that prints the alphabets in lower an upper case
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
	int i;
	char k;

	for (i = 'a'; i <= 'z'; ++i)
		putchar(i);
	for (k = 'A'; k <= 'Z'; ++k)
		putchar(k);

putchar('\n');
	return (0);
}
