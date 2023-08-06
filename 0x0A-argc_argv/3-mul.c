#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void multiply_args(int argc, char *argv[]);

/**
 * main - Main Entry
 * @argc: First param
 * @argv: Second param
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("%s\n", "Error");
        return (1);
    }
    multiply_args(argc, argv);
    return (0);
}

/**
 * multiply_args - multiply two arguments
 * @argc: First param
 * @argv: Second param
 */

void multiply_args(int argc, char *argv[])
{
    int i, result = 1;

    for (i = 1; i < argc; i++)
    {
        result *= atoi(argv[i]);
    }
    printf("%d\n", result);
}
