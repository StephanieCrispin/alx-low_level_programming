#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int tempValue;

    if (index > sizeof(unsigned long int) * 8)
        return (-1);

    tempValue = *n >> index;
    return (tempValue | 1);
}
