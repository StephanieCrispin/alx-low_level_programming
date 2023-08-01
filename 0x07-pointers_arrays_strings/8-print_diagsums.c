#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -> Print the sum of two diagonals of square matrix
 *
 * @a: the matrix
 * @size: the size
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
    int l = 0, num1 = 0, num2 = 0;

    while (l < size)
    {
        num1 += a[(size + 1) * l];
        num2 += a[(size - 1) * (l + 1)];
        l++;
    }

    printf("%d, %d\n", num1, num2);
}
