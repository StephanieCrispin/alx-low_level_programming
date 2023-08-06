#include "main.h"
#include <stdio.h>
void print_all_args(int argc, char *argv[]);

/**
 * main - Main Entry
 * @argc: First param
 * @argv: Second param
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	print_all_args(argc, argv);
	return (0);
}

/**
 * print_all_args -> Prints all arguments to stdout
 * @argc: First param
 * @argv: Second param
 */

void print_all_args(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
