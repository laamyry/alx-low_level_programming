#include "main.h"
/**
 * cap_string - capitalizes every first letter of a word in a string.
 * separators of words are:  space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 * @n: pointer to string.
 *
 * Return: pointer to s.
 */
char *cap_string(char *n)
{
	int count;

	count = 0;
	while (n[count] != '\0')
	{
		if (n[0] >= 97 && n[0] <= 122)
		{
			n[0] = n[0] - 32;
		}
		if (n[count] == ' ' || n[count] == '\t' || n[count] == '\n'
				|| n[count] == ',' || n[count] == ';' || n[count] == '.'
				|| n[count] == '.' || n[count] == '!' || n[count] == '?'
				|| n[count] == '"' || n[count] == '(' || n[count] == ')'
				|| n[count] == '{' || n[count] == '}')
		{
			if (n[count + 1] >= 97 && n[count + 1] <= 122)
			{
				n[count + 1] = n[count + 1] - 32;
			}
		}
		count++;
	}
	return (n);
}
