#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: arguments count.
 * @av: arguments vector.
 * Return: a pointer to a new string, Returns NULL if ac == 0 or av == NULL.
 */
char *argstostr(int ac, char **av)
{
	int m, n, i, len;
	char *str, *s1;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (m = 0; m < ac; m++)
	{
		s1 = av[m];
		n = 0;

		while (s1[n++])
		{
			len++;
		}
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (m = 0, n = 0; m < ac && n < len; m++)
	{
		s1 = av[m];
		i = 0;

		while (s1[i])
		{
			str[n] = s1[i];
			i++;
			n++;
		}
		str[n++] = '\n';
	}
	str[n] = '\0';
	return (str);
}
