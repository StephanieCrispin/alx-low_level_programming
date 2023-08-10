#include "main.h"

/**
 * _calloc -> Creates pointer for an array in my memory heap
 * @nmemb: First Param
 * @size: Second Param
 * Return: returns a void pointer oh
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int b;
	char *fill;
	void *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	fill = ptr;

	for (b = 0; b < (nmemb * size); b++)
		fill[b] = '\0';
	return (ptr);
}
