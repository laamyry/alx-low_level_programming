#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for.
 * Return: the index where value is located.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t lt = 0, rt = size - 1, mid, m;

	if (array == NULL)
	{
		return (-1);
	}
	while (lt <= rt)
	{
		mid = (lt + rt) / 2;
		printf("Searching in array: ");
		m = lt;
		while (m <= rt)
		{
			printf("%d", array[m]);
			if (m < rt)
			{
				printf(", ");
			}
			m++;
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			lt = mid + 1;
		}
		else
		{
			rt = mid - 1;
		}
	}
	return (-1);
}
