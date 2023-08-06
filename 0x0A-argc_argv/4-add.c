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
	int i, result = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result = result + atoi(argv[i]);
		}
	}

	printf("%d\n", result);
	return (0);
}
