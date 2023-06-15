#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 *
 * @head: Pointer.
 * Return: Nothing.
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
