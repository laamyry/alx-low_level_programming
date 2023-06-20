#include "main.h"
/**
 * _strlen - length of a string.
 *
 * @s: Value.
 * Return: length.
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		s++;
		leng++;

	}
	return (leng);
}
