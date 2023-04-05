#include "main.h"
/**
 * _strlen_recursion - calculate the length of a string.
 *
 * @s: string.
 * Return: return the result.
 */
int _strlen_recursion(char *s)
{
	int str = 0;

	if (*s)
	{
		str++;
		str += _strlen_recursion(s + 1);
	}
	return (str);
}
