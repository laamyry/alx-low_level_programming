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
	size_t m, lt = 0, rt = size - 1;

	if (!array)
	{
		return (-1);
	}
	while (rt >= lt)
	{
		m = lt + (((double)(rt - lt) /
		(array[rt] - array[lt])) * (value - array[lt]));
		if (m < size)
			printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", m);
			break;
		}

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
