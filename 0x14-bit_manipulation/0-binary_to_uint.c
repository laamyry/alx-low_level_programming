#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointing to a string of 0 and 1 chars.
 * Return:the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int m = 0;
	unsigned int n = 0;

	if (!b)
	{
		return (0);
	}
	while (b[m] != '\0')
	{
		if (b[m] != '0' && b[m] != '1')
		{
			return (0);
		}
		m++;
	}
	m = 0;
	while (b[m] != '\0')
	{
		n <<= 1;
		if (b[m] == '1')
		{
			n += 1;
		}
		m++;
	}
	return (n);

}
