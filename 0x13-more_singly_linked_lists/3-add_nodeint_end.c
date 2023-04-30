#include  "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: first node.
 * @n: integer.
 * Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	if (head == NULL)
	{
		return (0);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (0);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	for (tmp = *head; tmp->next != NULL; tmp = tmp->next)
	;

	tmp->next = new;
	return (new);
}
