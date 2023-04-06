#include "main.h"
/**
 * check - check 2 strings.
 *
 * @s1: 1st string.
 * @s2: 2nd string.
 * @i: left.
 * @j: special char.
 * Return: to function..
 */

int check(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
	{
		return (1);
	}
	if (s1[i] == s2[j])
	{
		return (check(s1, s2, i + 1, j + 1));
	}
	if (s1[i] == '\0' && s2[j] == '*')
	{
		return (check(s1, s2, i, j + 1));
	}
	if (s2[j] == '*')
	{
		return (check(s1, s2, i + 1, j) || check(s1, s2, i, j + 1));
	}
	return (0);
}


/**
 * wildcmp - compares two strings.
 *
 * @s1: 1st string.
 * @s2: 2nd string.
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */

int wildcmp(char *s1, char *s2)
{
	return (check(s1, s2, 0, 0));
}
