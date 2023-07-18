#include "main.h"

/**
* isalpha - main Entry
*
* Description: A C program that prints the alphabets
*
*Return: Always return (0)
*/

int _isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
