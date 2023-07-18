#include "main.h"

/**
* print _alphabet - Prints alphabets
*
* Description: A C program that prints the alphabets
*
*Return: Always return (0)
*/

int _islower(int c)
{
    int i;

	for (i = 'a'; i <= 'z'; i++)
	{
        if (c == i)
            _putchar(1);
        else
            _putchar(0);
	}
    return (0);
}
