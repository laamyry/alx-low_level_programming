#include "main.h"
/**
 * create_file - creates a file.
 *
 * @filename: The file name.
 * @text_content: the text content.
 * Return: Returns: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
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
	m = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(m, text_content, lengh);

	if (m == -1 || n == -1)
	{
		return (-1);
	}
	close(m);
	return (1);

}
