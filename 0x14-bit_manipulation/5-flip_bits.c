#include "main.h"

/**
 * flip_bits - flips any bit specified using (XOR)
 * @n: First param
 * @m: Second Param
 * Return: returns an unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int keepCount = 0;
	unsigned long int difference;

	difference = n ^ m;

	while (difference)
	{
		difference &= (difference - 1);
		keepCount++;
	}
	return (keepCount);
}
