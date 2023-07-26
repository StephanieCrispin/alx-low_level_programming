#include "main.h"
#include <stdio.h>
/**
 *puts2 -> Prints modulus of string
 *@str: A pointer argument
 */
void print_array(int *a, int n)
{
	int i, size = n - 1;

	for (i = 0; i <= size; i++)
		if (i != size)
			printf("%d, ", a[i]);

	printf("%d", a[size]);
	printf("\n");
}
