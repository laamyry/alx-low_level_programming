#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 *
 * @head: firt node.
 * @index: the index of the node.
 * Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *tmp, *next;
	unsigned int n = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	tmp = *head;
	while (n < index - 1)
	{
		if (tmp->next == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
		n++;
	}
	next = tmp->next;
	tmp->next = next->next;
	free(next);
	return (1);

}
