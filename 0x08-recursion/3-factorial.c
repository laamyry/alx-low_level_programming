#include "main.h"
/**
 * factorial - factorial of a given number.
 *
 * @n: given number.
 * Return: -1 if @n n is lower than 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));

}
