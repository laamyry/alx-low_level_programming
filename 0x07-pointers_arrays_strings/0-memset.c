#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 *
 * @n: first byte.
 * @b: constant byte.
 * @s: memory area pointed.
 * Return: return @s to function.
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
