#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 *
 * @size: the size of the array.
 * Returns a pointer to the newly created hash table
 * If something went wrong, your function should return NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int m = 0;
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
    {
		return (NULL);
    }

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
    {
		return (NULL);
    }
	while (m < size)
    {
		hash_table->array[m] = NULL;
        m++;
    }

	return (hash_table);

}