#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: first node.
 * Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev = NULL, *curr, *next;

	for (curr = (*head); curr != NULL; curr = next)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
	}

	*head = prev;
	return (*head);

}
