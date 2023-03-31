#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @n: pointer to string.
 *
 * Return: pointer to uppercase string.
 */
char *string_toupper(char *n)
{
	int len;

	len = 0;

	while (n[len] != '\0')
	{
		if (n[len] >= 97 && n[len] <= 122)
		{
			n[len] = n[len] - 32;
		}
		len++;
	}
	return (n);
}
