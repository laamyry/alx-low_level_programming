#include <stdio.h>
/**
 * main - main function.
 *
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int n = 0;

	while (n < argc)
	{

		printf("%s\n", argv[n]);
		n++;

	}
	return (0);

}
