#include "main.h"
/**
 * main - main function.
 *
 * @argc: argument.
 * @argv: argument.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int f, f_w, i, m, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f = open(argv[1], O_RDONLY);
	if (f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	for (i = read(f, buf, BUFSIZ); i > 0; i = read(f, buf, BUFSIZ))
	{
		if (f_w < 0 || write(f_w, buf, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(f);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m = close(f);
	n = close(f_w);
	if (m < 0 || n < 0)
	{
		if (m < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_w);
		exit(100);
	}
	return (0);
}
