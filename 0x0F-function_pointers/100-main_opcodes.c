#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function.
 *
 * @argc: argument's numbers.
 * @argv: argument's array.
 * Return: 0
 */
int main(int argc, char **argv)
{

	int n, byte;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		return (2);
	}
	n = 0;
	while (n < (byte - 1))
	{
		if (byte != 0)
		{
			printf("%02hhx ", ((char *)main)[n]);
		}
		n++;
	}
	printf("%02hhx\n", ((char *)main)[n]);
	return (0);

}
