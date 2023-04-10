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

	int n, m, res = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (m = 0; m < 5 && n >= 0; m++)
	{
		while (n >= coins[m])
		{
			res++;
			n -= coins[m];
		}
	}
	printf("%d\n", res);
	return (0);

}
