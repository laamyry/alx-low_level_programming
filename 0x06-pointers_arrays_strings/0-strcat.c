#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - concatenates two strings.
 *
 * @dest: 1st string.
 * @src: 2ed string.
 *
 * Returns: resulting string.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest,src);
		return (dest);
}
