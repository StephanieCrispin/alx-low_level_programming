#include "main.h"

/**
*main - Entry point
*
*Description: A C program that prints the alphabets
*
*Return: Always 0 success
*/
void print_alphabet(void);

void print_alphabet(void)
{
    int i;

    for (i = 'a'; i <= 'z'; i++)
    {
        _putchar(i);
    }
}

int main(void)
{
	print_alphabet();
	return (0);
}
