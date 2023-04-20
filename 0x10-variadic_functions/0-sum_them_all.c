#include "variadic_functions.h"
/**
 * sum_them_all - the sum of all its parameters.
 *
 * @n: argument's number.
 * Return: returns the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list vals;
	unsigned int m;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(vals, n);

	m = 0;
	while (m < n)
	{
		sum += va_arg(vals, int);
		m++;
	}
	va_end(vals);
	return (sum);

}
