#include "main.h"
/**
 * tring_nconcat -concatenates two strings.
 *
 * @n: interger.
 * @s1: string.
 * @s2: string.
 * Return: If the function fails, it should return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1l, s2l, m, k;
	char *string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1l = s2l = 0;
	while (s1[s1l] != '\0')
	{
		s1l++;
	}
	while (s2[s2l] != '\0')
	{
		s2l++;
	}
	if (n >= s2l)
	{
		n = s2l;
	}
	string = (char *) malloc((s1l + n + 1) * sizeof(char));
	if (string == NULL)
	{
		return (NULL);
	}
	for (m = 0; s1[m] != '\0'; m++)
	{
		string[m] = s1[m];
	}
	for (k = 0; k < n && s2[k] != '\0'; k++)
	{
		string[m] = s2[k];
		m++;
	}
	string[m] = '\0';
	return (string);
}
