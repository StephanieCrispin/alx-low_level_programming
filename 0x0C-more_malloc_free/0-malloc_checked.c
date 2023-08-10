#include "main.h"

/**
 * malloc_checked -> Returns function failed exit code on malloc FAIL
 * @b: First Parameter
 */

void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
        exit(98);
    return ptr;
}
