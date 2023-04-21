#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: printed strings.
 * @n: string's number.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list vals;
	unsigned int m;
	char *s;

	va_start(vals, n);

	m = 0;
	while (m < n)
	{
		s = va_arg(vals, char *);

		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (m < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
		m++;
		}

	printf("\n");
	va_end(vals);

}
