#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index-> Returns index of first int it finds
 * @array: array of integers
 * @size: size of the array
 * @cmp: the function that compares array elements
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{

			return i;
		}
	}
	return (-1);
}
