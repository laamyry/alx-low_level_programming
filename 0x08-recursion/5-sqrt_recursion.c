#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number.
 * @num: square root.
 * Return: root square.
 */
int square_root(int n, int num);
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));


}

/**
 * square_root - check square root.
 *
 * @n: number to check squar root.
 * @num: squar root.
 * Return: return square.
 */
int square_root(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}
	else if (num * num < n)
	{
		return (square_root(n, num + 1));
	}
	else
		return (-1);

}
