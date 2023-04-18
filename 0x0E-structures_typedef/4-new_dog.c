#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: the owner of the dog.
 * Return: struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t_dog;
	int n, l_name, l_owner;

	t_dog = malloc(sizeof(*t_dog));
	if (t_dog == NULL || !(name) || !(owner))
	{
		free(t_dog);
		return (NULL);
	}
	for (l_name = 0; name[l_name]; l_name++)
		;
	for (l_owner = 0; owner[l_owner]; l_owner++)
		;
	t_dog->name = malloc(l_name + 1);
	t_dog->owner = malloc(l_owner + 1);
	if (!(t_dog->name) || !(t_dog->owner))
	{
		free(t_dog->owner);
		free(t_dog->name);
		free(t_dog);
		return (NULL);
	}
	for (n = 0; n < l_name; n++)
		t_dog->name[n] = name[n];
	t_dog->name[n] = '\0';
	t_dog->age = age;
	for (n = 0; n < l_owner; n++)
		t_dog->owner[n] = owner[n];
	t_dog->owner[n] = '\0';
	return (t_dog);
}
