#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @n: numbers of bytes.
 * @src: string value.
 *@dest: string value.
 * Return: return string.
 */
char *_strncat(char *dest, char *src, int n)
{



	char *res = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}


	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest++ = *src++;
	}


	*dest = '\0';

	return (res);
}
