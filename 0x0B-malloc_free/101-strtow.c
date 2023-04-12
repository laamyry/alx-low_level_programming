#include <stdlib.h>
/**
 * count - words count.
 *
 * @str: string.
 * Return: words number.
 */
int count(char *str)
{
	int wr = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			str++;
		}
		else
		{
			while (*str != ' ' && *str != '\0')
			{
				str++;
			}
			wr++;
		}
	}
	return (wr);
}

/**
 * free_arr - free array.
 *
 * @arr: array.
 * @n: variable.
 * Return: nothing.
 */
void free_arr(char **arr, int n)
{
	if (arr != NULL && n != 0)
	{
		while (n >= 0)
		{
			free(arr[n]);
			n--;
		}
		free(arr);
	}
}

/**
 * strtow - splits a string into wrds.
 *
 * @str: splited string.
 * Return: NULL if it fails
 */
char **strtow(char *str)
{
	char **s;
	int m, n, i, wrd, strl;

	if (str == NULL || *str == '\0')
		return (NULL);

	strl = count(str);
	s = malloc((strl + 1) * sizeof(char *));
	if (strl == 0 || s == NULL)
		return (NULL);

	for (m = n = 0; m < strl; m++)
	{
		for (wrd = n; str[wrd] != '\0'; wrd++)
		{
			if (str[wrd] == ' ')
				n++;

			if (str[wrd] != ' ' && (str[wrd + 1] == ' ' || str[wrd + 1] == '\0'))
			{
				s[m] = malloc((wrd - n + 2) * sizeof(char));
				if (s[m] == NULL)
				{
					free_arr(s, m);
					return (NULL);
				}
				break;
			}
		}

		for (i = 0; n <= wrd; n++, i++)
			s[m][i] = str[n];
		s[m][i] = '\0';
	}
	s[m] = NULL;
	return (s);
}
