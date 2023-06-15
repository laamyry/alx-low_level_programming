#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 *
 * @h: pointer.
 * Return: the number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{

	size_t size = 0;

    if (h == NULL)
    {
		return (size);
    }

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);

}
