#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 *
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int m = 0;
	unsigned char flag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (m < ht->size)
	{
		if (ht->array[m] != NULL)
		{
			if (flag == 1)
				printf(", ");

			node = ht->array[m];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			flag = 1;
		}
		m++;
	}
	printf("}\n");
}
