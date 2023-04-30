#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: first node.
*/
void free_listint2(listint_t **head)
{

	listint_t *next;

	if (head == NULL)
	{
		return;
	}
	for (; *head != NULL; *head = next)
	{
		next = (*head)->next;
		free(*head);
	}

}
