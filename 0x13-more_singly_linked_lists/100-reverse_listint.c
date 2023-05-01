#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: first node.
 * Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{

	listint_t *last, *next;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	if ((*head)->next == NULL)
	{
		return (*head);
	}
	last = NULL;
	for (; *head != NULL; *head = next)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = *head;
	}
	*head = last;
	
	return (*head);

}
