#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: head pointer.
 * @idx: node index.
 * @n: value.
 * Return: address of the new node or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (!idx)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current_node = *h;
	while (idx > 1)
	{
		if (!current_node)
		{
			free(new_node);
			return (NULL);
		}
		current_node = current_node->next;
		idx--;
	}
	new_node->prev = current_node;
	new_node->next = current_node->next;

	if (current_node->next)
		current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
}
