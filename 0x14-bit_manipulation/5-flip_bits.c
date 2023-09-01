#include "main.h"

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
