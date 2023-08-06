#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Main Entry
 * @argc: First param
 * @argv: Second param
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int result = 0, num, u, j, k;

	for (u = 1; u < argc; u++)
	{
		for (j = 0; argv[u][j] != '\0'; j++)
		{
			if (argv[u][j] > '9' || argv[u][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
