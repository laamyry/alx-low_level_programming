#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int i = 0, m = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (m < 2772)
	{
		i = rand() % 128;
		if ((m + i) > 2772)
			break;
		m = m + i;
		printf("%c", i);
	}
	printf("%c\n", (2772 - m));
	return (0);
}
