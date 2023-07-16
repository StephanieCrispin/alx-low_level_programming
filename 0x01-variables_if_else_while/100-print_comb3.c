#include <stdio.h>

/**
*main - Entry point
*
*Description: A C progam returns all possible combinations of c
*
*Return: Always return 0
*/

int main(void){

	int i, k;

	for (i = '0'; i <= '8'; i++)
	{
	    for (k = '1'; k <= '9'; k++)
		{
			if(i > k)
			{
				putchar(i);
				putchar(k);
				if (i != '8' || (i == '8' && k != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
