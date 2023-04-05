#include "main.h"
/**
 * is_prime_number - print prime number.
 *
 * @n: int positive number.
 * Return: 1 if the nummber is prime number
 * otherwise return 0.
 */
int check(int n, int other);
int is_prime_number(int n)
{
	return (check(n,2));

}

/**
 * check - chck the prime number.
 *
 * @n: number.
 * @other: number.
 * Return: the prime number.
 */
int check(int n, int other)
{
	if (other >= n && n > 1)
	{
		return (1);
	}
	else if (n % other == 0 || n <= 1)
	{
		return (0);
	}
	else
	return (check(n, other + 1));
}
