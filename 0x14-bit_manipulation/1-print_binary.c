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
	unsigned int n = 1;

	while (n <= exp)
	{
		number *= base;
		n++;
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
