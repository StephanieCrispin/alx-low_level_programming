#include "main.h"
/**
 *swap_int -> Updates the value of pointer
 *@a: A pointer argument
 *@b: A pointer argument
 *Return: returns 1 or 0 based on argument
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
