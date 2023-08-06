#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int check_that_numbers_are_positive(int argc, char *argv[]);
int add_positive_numbers(int argc, char *argv[]);
/**
 * main - Main Entry
 * @argc: First param
 * @argv: Second param
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	check_that_numbers_are_positive(argc, argv);
	add_positive_numbers(argc, argv);
	return (0);
}

int check_that_numbers_are_positive(int argc, char *argv[])
{
	int i, j;

	for (i = 1; i < argc; i++)
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
	return (0);
}

/**
 * add_positive_numbers - A function that adds positive numbers
 * @argc: First param
 * @argv: Second param
 * Return: returns 0
 */

int add_positive_numbers(int argc, char *argv[])
{
	int i, result = 0, num;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		result += num;
	}

	printf("%d\n", result);
	return (0);
}
