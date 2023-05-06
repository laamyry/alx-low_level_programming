#include "main.h"
/**
 * flip_bits -  number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: 1st number.
 * @m: 2nd number.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int dif, res = 1;
	unsigned int j = 0, i = 0;


	dif = n ^ m;
	while (i < (sizeof(unsigned long int) * 8))
	{
		if (res == (dif & res))
		{
			j++;
		}
		res <<= 1;
		i++;
	}
	return (j);

}
