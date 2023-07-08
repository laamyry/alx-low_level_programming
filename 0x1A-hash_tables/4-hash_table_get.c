#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: the hash table you want to look into
 * @key: the key you are looking for.
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
    hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
    {
		return (NULL);
    }

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
    {
		return (NULL);
    }

	for (node = ht->array[idx]; node && strcmp(node->key, key)
    != 0; node = node->next)
    ;
	return ((node == NULL) ? NULL : node->value);
}