#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints out binary representiation of a decimal using bit op
 * @n: only param
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int temp;

	if (n == '\0')
	{
		printf("0");
		return;
	}

	i = 0;
	temp = n;
	while ((temp >>= 1) > 0)
		i++;

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}
