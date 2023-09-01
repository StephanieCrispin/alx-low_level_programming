#include "main.h"

/**
 * set_bit - sets a bit at a given position(index) to 1
 * @index: Second param
 * @n: First Param
 * Return: returns an int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
    unsigned int hIndex;
    unsigned long int temp;

    if (index > sizeof(unsigned long int) * 8)
        return (-1);
    hIndex = index;
    for (temp = 1; index > 0; index--, temp = temp * 2)
        ;

    if ((*n >> hIndex) & 1)
        *n = *n + temp;

    return (0);
}
