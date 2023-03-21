#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: input value of integer
 *
 *
 *Return: return last digit.
 */

int print_last_digit(int i)
{
	int ld;

	ld = i % 10;
	if (ld < 0)
	{
		_putchar (-ld + '0');
		return (-ld);


	}
	else
	{
		_putchar (ld + '0');
		return (ld);
	}

}
