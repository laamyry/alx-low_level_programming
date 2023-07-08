#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int m = 0;
	hash_table_t *head = ht;
	hash_node_t *node, *temp;


	while (m < ht->size)
	{
		if (ht->array[m] != NULL)
		{
			node = ht->array[m];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
		m++;
	}
	free(head->array);
	free(head);
}
