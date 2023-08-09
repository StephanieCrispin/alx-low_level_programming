#include "main.h"

/**
 * argstostr - Concatenates all arguments into a string;
 *            They are separated by a new line in the string.
 * @ac:  number of arguments passed to the program.
 * @av: The array of pointers to the arguments.
 *
 * Return: Null chekcs - If there is a fail.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int argument, byte, i, size = ac;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (argument = 0; argument < ac; argument++)
	{
		for (byte = 0; av[argument][byte]; byte++)
			size++;
	}

	string = malloc(sizeof(char) * size + 1);

	if (string == NULL)
		return (NULL);

	i = 0;

	for (argument = 0; argument < ac; argument++)
	{
		for (byte = 0; av[argument][byte]; byte++)
			string[i++] = av[argument][byte];

		string[i++] = '\n';
	}

	string[size] = '\0';

	return (string);
}
