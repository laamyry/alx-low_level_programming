#include "dog.h"
/**
 * free_dog - frees dogs.
 *
 * @d: pointer.
 * Return: void.
 */
void free_dog(dog_t *d)
{

	if (d)
	{
	
		if (d->name)
		{
			free(d->name);
		}
		else if (d->owner)
		{
			free(d->owner);
		}
		else
		{
			free(d);
		}
	
	}

}
