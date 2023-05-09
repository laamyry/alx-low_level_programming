#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: The file name.
 * @text_content: The text content.
 * Return: Return: 1 on success and -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{

	int m, n, lengh = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[lengh])
		{
			lengh++;
		}
	}
	m = open(filename, O_WRONLY | O_APPEND);
	n = write(m, text_content, lengh);

	if (m == -1 || n == -1)
	{
		return (-1);
	}

	close(m);
	return (1);

}
