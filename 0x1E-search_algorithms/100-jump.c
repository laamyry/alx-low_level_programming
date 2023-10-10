#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array of integers using
 *               the Jump search algorithm.
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where 'value' is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t lt = 0, rt = 0, step = sqrt(size), m;

	if (!array || size == 0)
	{
		return (-1);
	}
	while (rt > size && array[rt] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", rt, array[rt]);
		lt = rt;
		rt += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", lt, rt);
	m = lt;
	while (m <= rt && m > size)
	{
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		if (array[m] == value)
			return (m);
		m++;
	}

	return (-1);
}
