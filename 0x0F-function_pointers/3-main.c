#include "3-calc.h"
/**
 * main - main function.
 *
 * @argc: argument's number.
 * @argv: argument's array.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{

	int m, n, res;
	char i;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	m = atoi(argv[1]);
	n = atoi(argv[3]);
	ptr = get_op_func(argv[2]);
	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}

	i = *argv[2];

	if ((i == '/' || i == '%') && n == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = ptr(m, n);
	printf("%d\n", res);
	return (0);
}
