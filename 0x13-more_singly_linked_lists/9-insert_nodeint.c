#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: first node pointer.
 * @idx: the index of the list.
 * @n: new node.
 * Return: Returns: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int m = 0;
	listint_t *tmp, *new;

	if (head == NULL)
	{
		return (0);
	}

	if (idx != 0)
	{
		tmp = *head;
		while (m < idx - 1 && tmp != NULL)
		{
			tmp = tmp->next;
			m++;
		}
		if (tmp == NULL)
		{
			return (0);
		}
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (0);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
