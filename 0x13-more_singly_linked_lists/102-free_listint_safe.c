#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 *
 * @h: first node pointer.
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{

	listint_t *tmp;
	size_t leng = 0;
	int dif;

	if (!h || !*h)
	{
		return (0);
	}

	for (; *h; leng++)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return (leng);

}
