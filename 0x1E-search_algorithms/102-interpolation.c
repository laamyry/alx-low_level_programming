#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm.
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where 'value' is located, or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lw = 0, hg = size - 1, ps;

	if (!array)
	{
		return (-1);
	}
	while (lw <= hg && value >= array[lw] && value <= array[hg])
	{
		ps = lw + (((double)(hg - lw) /
		(array[hg] - array[lw])) * (value - array[lw]));

		printf("Value checked array[%lu] = [%d]\n", ps, array[ps]);

		if (array[ps] == value)
		{
			return (ps);
		}
		else
		{
			hg = ps - 1;
		}
	}

	printf("Value checked array[%lu] is out of range\n", ps);

	return (-1);
}
