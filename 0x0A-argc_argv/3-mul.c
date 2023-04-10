#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function.
 *
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int m, n, mul;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		mul = m * n;
		printf("%d\n", mul);

	}

	return (0);

}
