#include "main.h"

/**
* 8-24_hours.c -> prints out time
* Return: Always 0 success
*/

void jack_bauer(void)
{
    int i, j, k;

    i = 0;
    while(i < 23)
    {
        j = 0;
        while( j < 23)
        {
            k = 0;
            while (k < 59)
            {
                _putchar((j / 10) + '0');
                _putchar((j % 10) + '0');
                _putchar(':');
                _putchar((k / 10) + '0');
                _putchar((k % 10) + '0');
                k++;
            }
            j++;
        }
        _putchar('\n');
        i++;
    }
}
