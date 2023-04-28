#include "lists.h"
/**
 * add_node - adds a new_ele node at the beginning.
 *
 * @head: linked list head.
 * @str: string.
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new_ele;
	size_t n;

	new_ele = malloc(sizeof(list_t));
	if (new_ele == NULL)
	{
		return (NULL);
	}
	new_ele->str = strdup(str);

	n = 0;
	while (str[n])
	{
		n++;
	}

	new_ele->len = n;
	new_ele->next = *head;
	*head = new_ele;

	return (*head);

}
