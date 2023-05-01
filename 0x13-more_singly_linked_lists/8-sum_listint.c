#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * 
 * @head: firt node.
 * Return: the sum.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	 {
		return (0);
	 }

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	 return (sum);
	}