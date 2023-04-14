#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: elements.
 * @size: the size of the memory to print.
 * Return:  returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	void *m;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	m = malloc(nmemb * size);
	if (m == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < (nmemb * size); n++)
	{
		*((char *)(m) + n) = 0;
	}
	return (m);
}
