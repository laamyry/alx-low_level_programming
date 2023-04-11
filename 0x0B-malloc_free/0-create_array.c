#include "main.h"
/**
 * create_array - creates an array of chars..
 *
 * @size: size.
 * @c: an array.
 * Return: Returns a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
	{
		return (0);
	}

	while (size--)
	{
		arr[size] = c;
	}
	return (arr);


}
