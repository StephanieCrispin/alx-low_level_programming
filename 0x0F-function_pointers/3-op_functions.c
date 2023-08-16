#include "3-calc.h"

/**
 * op_add -> adds two integers
 * This function adds two integers
 * and returns the sum of both integers
 * @a:First Param
 * @b: Second Param
 * Return: Returns an integer result
 */

int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub -> subracts two integers
 * This function will subtract two integers
 * and return the difference between the two
 * @a:First Param
 * @b: Second Param
 * Return: Returns an integer result
 */

int op_sub(int a, int b)
{
    return (a - b);
}
/**
 * op_mul -> multiplies two integers
 * This function will multiply two integers
 * @a:First Param
 * @b: Second Param
 * Return: Returns an integer result
 */

int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div -> will divide two integers
 * This function divides two integers
 * @a:First Param
 * @b: Second Param
 * Return: Returns an integer result
 */

int op_div(int a, int b)
{
    if (b != 0)
        return (a / b);
    printf("Error\n");
    exit(100);
}

/**
 *op_mod -> will modulus two integers
 * This function gives back the modulus
 * result of two integers
 * @a:First Param
 * @b: Second Param
 * Return: Returns an integer result
 */

int op_mod(int a, int b)
{
    if (b != 0)
        return (a % b);

    printf("Error");
    exit(100);
}
