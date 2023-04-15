#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free.
 *
 * @ptr: pointer.
 * @old_size: old size.
 * @new_size: new size.
 * Return: return pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pptr, *ppptr;
	unsigned int m;

	if (ptr != NULL)
	{
		pptr = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	ppptr = malloc(new_size);
	if (ppptr == NULL)
	{
		return (0);
	}
	m = 0;
	while (m < (old_size || m < new_size))
	{
		*(ppptr + m) = pptr[m];
		m++;
	}
	free(ptr);
	return (ppptr);
}
