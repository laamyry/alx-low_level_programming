#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 *
 * @str: string.
 * Return: Returns NULL if str = NULL.
 */
char *_strdup(char *str)
{
	int n = 0, size = 0;
	char *m;

	if (str == 0)
	{
		return (0);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (0);
	}
	else
	{
		for (; n < size; n++)
		{
			m[n] = str[n];
		}
	}
	return (m);
}
