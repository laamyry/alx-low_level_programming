#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @n: input string value.
 * Return: return to leet.
 */
char *leet(char *n)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	stringCount = 0;
	while (n[stringCount] != '\0')

	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == n[stringCount])
			{
				n[stringCount] = leetNums[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (n);
}
