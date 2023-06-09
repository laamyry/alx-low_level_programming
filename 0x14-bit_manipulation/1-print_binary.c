#include "main.h"
/**
 * _exp - calculate.
 *
 * @base: base.
 * @exp: power.
 * Return: value.
 */
unsigned long int _exp(unsigned int base, unsigned int exp)
{

	unsigned long int number;
	unsigned int m;

	for (m = 1; m <= exp; m++)
	{
		number *= base;
	}
	return (number);

}

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: prented number.
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{

	unsigned long int m, res;
	char f;

	f = 0;
	m = _exp(2, sizeof(unsigned long int) * 8 - 1);

	for (; m != 0; m >>= 1)
	{
		res = n & m;
		if (res == m)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || m == 1)
		{
			_putchar('0');
		}
	}

}
