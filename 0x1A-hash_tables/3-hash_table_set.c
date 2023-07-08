#include "hash_tables.h"
/**
 * make_node - make hash node.
 *
 * @key: the key.
 * @value: the value associated with the key.
 * Return: new node, or NULL.
 */
hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: the hash table you want to add or update.
 * @key: the key.
 * @value: the value associated with the key.
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node, *temp;
	char *n_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		{
		return (0);
		}
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			n_value = strdup(value);
			if (n_value == NULL)
				return (0);
			free(temp->value);
			temp->value = n_value;
			return (1);
		}
		temp = temp->next;
	}
	new_node = make_node(key, value);
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
