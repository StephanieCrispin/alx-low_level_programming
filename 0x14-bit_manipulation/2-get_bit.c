#include "main.h"
#include <stdio.h>

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tempVal;

	if (index >= sizeof(unsigned long int) * 8)
		return -1;

	tempVal = n / (1 << index);
	return (tempVal & 1);
}
