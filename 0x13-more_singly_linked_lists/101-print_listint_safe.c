#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: first node.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{

	long int dif;
	size_t num = 0;

	for (; head != NULL; head = head->next)
	{
		dif = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (dif > 0)
		{
			continue;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);

	}
