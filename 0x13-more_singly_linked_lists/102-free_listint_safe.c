#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 *
 * @h: first node pointer.
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	int dif;
	size_t leng = 0;
	listint_t *tmp;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			leng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;
		}
	}

	*h = NULL;

	return (leng);

}
