#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - A struct definition for dogs
 * @name: First struct member
 * @age: Second struct member
 * @owner: Third struct definition
 */

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
