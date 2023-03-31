#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @n: input value.
 * Return: return to rot13.
 */
char *rot13(char *n)
{
	char *p = n;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = (*p - 'a' + 13) % 26 + 'a';
		}
		else if (*p >= 'A' && *p <= 'Z')
		{
			*p = (*p - 'A' + 13) % 26 + 'A';
		}
		p++;
	}
	return (n);

}
