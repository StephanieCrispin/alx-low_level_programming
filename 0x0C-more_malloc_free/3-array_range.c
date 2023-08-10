#include "main.h"

/**
 * array_range -> An array range starting from min to max
 * @min: First Param
 * @max: Second Param
 * Return: An int pointer
 *
 */

int *array_range(int min, int max)
{
	int *i, j, size, k;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	i = malloc(sizeof(int) * size);

	for (j = 0, k = min; min < size; min++)
	{
		i[j] = min;
		j += 1;
	}

	return (i);
}
