#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: first node.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{

	const listint_t *tmp = NULL, *leng = NULL;
	size_t num = 0, new;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		num++;
		tmp = tmp->next;
		leng = head;

		for (new = 0; new < num; new++)
		{
			if (tmp == leng)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (num);
			}
			leng = leng->next;
		}
		if (!head)
		{
			exit(98);
		}
	}
	return (num);
	
	}
