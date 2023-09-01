#include "main.h"

/**
 * set_bit - sets a bit at a given position(index) to 1
 * @index: Second param
 * @n: First Param
 * Return: returns an int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int temp;

    if (index > sizeof(unsigned long int) * 8)
        return (-1);

    for (temp = 1; index > 0; index--, temp = temp * 2)
        ;
    *n = *n + temp;

    return (0);
}
