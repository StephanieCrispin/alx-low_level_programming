#include "main.h"
#include <stdio.h>
/**
 *puts2 -> Prints modulus of string
 *@str: A pointer argument
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
