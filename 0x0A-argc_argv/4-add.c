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
	int add = 0;
	char *n;

	while (--argc)
	{
		for (n = argv[argc]; *n; n++)
		{
			if (*n < '0' || *n > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[argc]);

	}
	printf("%d\n", add);
	return (0);

}
