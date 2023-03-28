#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: string value.
 */

void print_rev(char *s)
{
	int le = 0;
	int n;

	while (*s != '\0')
	{
		le++;
		s++;
	}

	s--;
	for (n = le; n > 0; n--)
	{
		_putchar (*s);
		s--;
	}
	_putchar('\n');
}
