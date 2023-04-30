#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 *
 * @head: first node.
 * Return: nothing.
 */
int pop_listint(listint_t **head)
{

	int n;
	listint_t *begin;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	begin = *head;
	*head = begin->next;
	n = begin->n;
	free(begin);
	return (n);

}
