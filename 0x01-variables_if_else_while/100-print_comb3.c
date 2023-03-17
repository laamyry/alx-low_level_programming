#include <stdio.h>
/**
 * main - prints out all the numbers between 00 and 99
 * with no two digits being the same
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 48; x < 58; x++)
	{
		for (y = x; y < 58; y++)
		{
			if (x == y)
			{
				continue;
			}

			putchar(x);
			putchar(y);

			if (x == 56 && y == 57)
			{
				break;
			}
			else

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
