#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 *
 * @array: array.
 * @size: number of elements in the array.
 * @cmp: function.
 * Return: index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int n;

	if (array && cmp)
	{
		n = 0;
		while (n < size)
		{
			if (cmp(array[n]) != 0)
			{
				return (n);
			}
			n++;
		}
	}
	return (-1);

}
