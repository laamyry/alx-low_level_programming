#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: number of nodes.
 * Return: the number of nodes.
*/
size_t print_listint(const listint_t *h)
{

	size_t n;

	for (n = 0; h; n++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);

}
