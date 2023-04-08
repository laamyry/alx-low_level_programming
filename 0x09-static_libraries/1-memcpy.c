#include "main.h"
/**
 * _memcpy - copies memory area.
 *
 * @dest: 1st string.
 * @src: 2nd string.
 * @n: bytes from memory area
 * Return: return @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
