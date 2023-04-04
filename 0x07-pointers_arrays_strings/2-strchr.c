#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @s: string.
 * @c: char.
 * Return: return to function.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');


}
