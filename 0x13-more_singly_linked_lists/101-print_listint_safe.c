#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: firsst node.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	long int dif;
	size_t num;

	for (num = 0; head; num++)
	{
		dif = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		if (dif > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);

}
