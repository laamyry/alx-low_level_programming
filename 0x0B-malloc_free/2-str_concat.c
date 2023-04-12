#include "main.h"
/**
 * str_concat - concatenates two strings.
 *
 * @s1: string.
 * @s2: other string.
 * Return: pointer to the new string created, or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int n, m, s1len = 0, s2len = 0;
	char *s;

	while (s1 && s1[s1len])
	{
		s1len++;
	}
	while (s2 && s2[s2len])
	{
		s2len++;
	}
	s = malloc(sizeof(char) * (s1len + s2len + 1));
	if (s == 0)
	{
		return (0);
	}
	n = 0;
	m = 0;
	if (s1)
	{
		while (n < s1len)
		{
			s[n] = s1[n];
			n++;
		}
	}

	if (s2)
	{
		while (n < (s1len + s2len))
		{
			s[n] = s2[m];
			n++;
			m++;
		}
	}
	s[n] = '\0';

	return (s);
}
