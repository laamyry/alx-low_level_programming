#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter.
 *
 * @array: array iterate.
 * @size: array's size.
 * @action: pointer to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (!array || !action)
	{
		return;
	}
	n = 0;
	while (n < size)
	{
		action(array[n]);
		n++;
	}
}
