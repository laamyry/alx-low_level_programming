#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 *
 * @head: firt node.
 * @index: the index of the node.
 * Return: the nth node.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int n = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (n < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		n++;
	}
	return (head);
}
