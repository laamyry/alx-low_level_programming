#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: string.
 * @n: integer's number.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list ls;

	va_start(ls, n);
	m = 0;
	while (m < n)
	{
		if (!separator)
		{
			printf("%d", va_arg(ls, int));
		}
		else if (separator && m == 0)
		{
			printf("%d", va_arg(ls, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(ls, int));
		}
		m++;
	}
	va_end(ls);
	printf("\n");
}
