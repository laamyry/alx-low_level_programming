#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list.
 *
 * @head: double pointer head.
 * @index: the index of the node.
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int m;

	if (head == NULL || *head == NULL)
		return (-1);

	curr = *head;

	if (index == 0)
	{
		*head = curr->next;

		if (curr->next != NULL)
			curr->next->prev = NULL;

		free(curr);
		return (1);
	}

	for (m = 0; curr != NULL && m < index; m++)
		curr = curr->next;

	if (curr == NULL)
		return (-1);

	curr->prev->next = curr->next;

	if (curr->next != NULL)
		curr->next->prev = curr->prev;

	free(curr);
	return (1);
}
