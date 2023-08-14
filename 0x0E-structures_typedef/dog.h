#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - A struct definition for dogs
 * @name: First struct member
 * @age: Second struct member
 * @owner: Third struct definition
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
