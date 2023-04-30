#include "lists.h"
/**
	* add_nodeint - adds a new node at the beginning of a listint_t list.
	*
	* @head: pointer head.
	* @n: integer.
	* Return: Return: the address of the new element.
	* or NULL if it failed
	*/
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *p;

	if (head == NULL)
		{
		return (0);
		}
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		{
		return (0);
		}
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);

}
