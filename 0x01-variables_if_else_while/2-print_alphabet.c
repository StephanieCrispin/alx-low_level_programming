#include <stdio.h>

/**
* main - Entry point
*
* Description: A C program that prints the postivity or negativity of a number
*
* Return: Always 0 (Success)
*
*/
void print_alphabet(void);

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; ++i)
		putchar(i);

	putchar('\n');
	return (0);
}
