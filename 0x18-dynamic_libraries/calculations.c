#include <stdlib.h>
#include <stdio.h>

/**
 * add -> adds two integers
 * This function adds two integers
 * and returns the sum of both integers
 * @a:First Param
 * @b: Second Param
 * Return: Returns an integer result
 */

int add(int a, int b)
{
    return (a + b);
}

/**
 * sub -> subracts two integers
 * This function will subtract two integers
 * and return the difference between the two
 * @a:First Param
 * @b: Second Param
 * Return: Returns an integer result
 */

int sub(int a, int b)
{
    return (a - b);
}
/**
 * mul -> multiplies two integers
 * This function will multiply two integers
 * @a:First Param
 * @b: Second Param
 * Return: Returns an integer result
 */

int mul(int a, int b)
{
    return (a * b);
}

/**
 * div -> will divide two integers
 * This function divides two integers
 * @a:First Param
 * @b: Second Param
 * Return: Returns an integer result
 */

int div(int a, int b)
{
    if (b != 0)
        return (a / b);
    printf("Error\n");
    exit(100);
}

/**
 *mod -> will modulus two integers
 * This function gives back the modulus
 * result of two integers
 * @a:First Param
 * @b: Second Param
 * Return: Returns an integer result
 */

int mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a % b);
}
