#include "search_algos.h"
/**
  * binarysearch - searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @lt: starting of index.
 * @rt: ending of index.
 * @value: the value to search for.
 * Return: the index where value is located.
 */
int binarysearch(int *array, size_t lt, size_t rt, int value)
{
	size_t m;

	if (array == NULL)
	{
		return (-1);
	}

	while (rt >= lt)
	{
		printf("Searching in array: ");
		for (m = lt; m < rt; m++)
		{
			printf("%d, ", array[m]);
		}
		printf("%d\n", array[m]);

		m = lt + (rt - lt) / 2;
		if (array[m] == value)
		{
			return (m);
		}
		if (array[m] > value)
		{
			rt = m - 1;
		}
		else
		{
			lt = m + 1;
		}
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for.
 * Return: the index where value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t m = 0, rt;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (m = 1; m < size && array[m] <= value; m = m * 2)
			printf("Value checked array[%ld] = [%d]\n", m, array[m]);
	}

	rt = m < size ? m : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", m / 2, rt);
	return (binarysearch(array, m / 2, rt, value));
}
