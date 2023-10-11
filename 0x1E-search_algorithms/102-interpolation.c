#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: the first index where value is located.
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
		else if (array[ps] < value)
		{
			lw = ps + 1;
		}
		else
		{
			hg = ps - 1;
		}
	}

	printf("Value checked array[%lu] is out of range\n", ps);

	return (-1);
}
