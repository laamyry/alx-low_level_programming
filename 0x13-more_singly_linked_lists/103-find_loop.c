#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 *
 * @head: first node.
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{

	listint_t *n = head, *m = head;

	if (!head)
	{
		return (0);
	}

	for (; n && m && m->next; n = n->next)
	{
		m = m->next->next;
		if (m == n)
		{
			n = head;
			while (n != m)
			{
				n = n->next;
				m = m->next;
			}
			return (m);
		}
	}
	return (0);

}
