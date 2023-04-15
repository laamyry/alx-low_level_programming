#include "main.h"
/**
 * array_range - creates an array of integers.
 *
 * @min: min integers.
 * @max: max integers.
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *m, n, i;

	n = 0;
	if (min > max)
	{
		return (NULL);
	}
	n = ((max + 1) - min);
	m = malloc(n * sizeof(int));
	if (m == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		*(m + i) = min + i;
		i++;
	}
	return (m);
}
