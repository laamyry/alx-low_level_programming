#include "lists.h"
/**
 * list_len - returns the number of elements.
 *
 * @h: list_t list.
 * Return: elements number.
*/
size_t list_len(const list_t *h)
{

	size_t n;

	for (n = 0; h; n++)
	{

		h = h->next;
	}
	return (n);

}
