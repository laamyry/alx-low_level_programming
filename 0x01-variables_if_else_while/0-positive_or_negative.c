#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Description: 'the program's description'
*
* Return: Always 0 (Success)
*/

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("");
	scanf("%d", &n);
		if (n > 0)
		{
			printf("%d is positive", n);
		}
		else if (n < 0)
		{

			printf("%d is negative", n);
		}
		else
			printf("%d is zero", n);

		return (0);
}