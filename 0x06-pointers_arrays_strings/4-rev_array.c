#include "main.h"
/**
 * reverse_array - revereses an array.
 * @a: pointer to array.
 * @n: number of elements of an array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int tmp, count;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		tmp = a[count];
		a[count++] = a[n];
		a[n--] = tmp;
	}
}
