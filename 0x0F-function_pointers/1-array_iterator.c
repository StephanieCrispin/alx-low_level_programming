#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -> Iterates an array and acts on each element
 * @array: First Param
 * @size: Second Param
 * @action: Third Param
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
