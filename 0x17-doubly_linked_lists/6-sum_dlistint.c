#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list.
 *
 * @head: head pointer.
 * Return: if the list is empty, return 0
 **/
int sum_dlistint(dlistint_t *head)
{
	long int sum = 0;
	dlistint_t *tmp = head;

	for (; tmp != NULL; tmp = tmp->next)
	{
		sum += tmp->n;
	}

	return (sum);
}
