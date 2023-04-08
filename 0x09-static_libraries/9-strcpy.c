#include "main.h"
/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: destination
 * @src: source
 * Return: strcpy return.
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; *(src + n) != '\0'; n++)
	{
		dest[n] = *(src + n);
	}
	dest[n] = '\0';

	return (dest);
}
