#include <stdio.h>

/**
* main - Entry point
*
* Description: A c program that prints the alphabets in reverse order
*
* Return: Always return 0
*/
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; --i)
		putchar(i);

putchar('\n');
	return (0);
}
