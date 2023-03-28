#include "main.h"
/**
 * rev_string - reverses a string.
 *
 * @s: string value.
 */
void rev_string(char *s)
{
	int i, j, k;
	char fi, la;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	k = j / 2;
	while (k >= 0)
	{
		fi = s[j - k];
		la = s[k];
		s[k] = fi;
		s[j - k] = la;
		k--;
	}
}
