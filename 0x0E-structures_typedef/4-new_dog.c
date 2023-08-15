#include "dog.h"
#include <stdio.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strcopy - Copies string to a buffer.
 * @dest: The buffer storing the string copy.
 * @src: source string.
 *
 * Return: pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - gets a length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * new_dog-> creates new dog details
 * @name: First param
 * @age: Second param
 * @owner: Third param
 * Return: A new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	a_dog = malloc(sizeof(struct dog));
	if (a_dog == NULL)
		return (NULL);

	a_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (a_dog->name == NULL)
	{
		free(a_dog);
		return (NULL);
	}

	a_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (a_dog->owner == NULL)
	{
		free(a_dog->name);
		free(a_dog);
		return (NULL);
	}
	a_dog->name = _strcopy(a_dog->name, name);
	a_dog->age = age;
	a_dog->owner = _strcopy(a_dog->owner, owner);
	return (a_dog);
}
