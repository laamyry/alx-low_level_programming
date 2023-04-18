#ifndef _dog
#define _dog
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - struct dog.
 *
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 */
struct dog
{

	char *name;
	float age;
	char *owner;

};

typedof struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
