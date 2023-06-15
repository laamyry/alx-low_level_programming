#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: pointer head.
 * @index: index node.
 * Return: if the node does not exist, return NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int count;
	dlistint_t *current;

		for (count = 0, current = head;
		 current != NULL && count < index;
		 count++, current = current->next)
		;

	if (count == index)
		return (current);

	return (NULL);

}
