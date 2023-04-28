#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: linked list head.
 * @str: string.
 * Return: the address of the new element,
 * or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_ele, *tmp;
	size_t n = 0;

	new_ele = malloc(sizeof(list_t));
	if (new_ele == NULL)
	{
		return (0);
	}
	new_ele->str = strdup(str);
	while (str[n])
	{
		n++;
	}
	new_ele->len = n;
	new_ele->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new_ele;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_ele;
	}
	return (*head);
}
