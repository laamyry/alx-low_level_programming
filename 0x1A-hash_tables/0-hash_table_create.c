#include "hash_tables.h"
/**
 * hash_table_create - creates a hash tbl.
 *
 * @size: the size of the arr.
 * Return: a pointer to the newly created hash tbl
 * If something went wrong, your function should return NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tbl;
	hash_node_t **arr;
	unsigned long int m = 0;

	tbl = malloc(sizeof(hash_table_t));
	if (tbl == NULL)
	{
		return (NULL);
	}

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	while (m < size)
	{
		arr[m] = NULL;
		m++;
	}

	tbl->array = arr;
	tbl->size = size;

	return (tbl);
}
