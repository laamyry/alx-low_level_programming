#include "main.h"
/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: integer.
 * Return: a pointer.
 */
void *malloc_checked(unsigned int b)
{

	int *n = malloc(b);

	if (n == 0)
	{
		exit(98);
	}
	return(n);

}
