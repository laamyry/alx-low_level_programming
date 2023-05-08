#include "main.h"
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 *
 * @filename: file name.
 * @letters: letters is the number of letters it should read and print.
 * Return: if filename is NULL return 0
 * if write fails or does not write the expected
 * amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t m, n, i;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	m = open(filename, O_RDONLY);
	n = read(m, buf, letters);
	i = write(STDOUT_FILENO, buf, n);

	if (m == -1 || n == -1 || i == -1 || i != n)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(m);
	return (i);

}
