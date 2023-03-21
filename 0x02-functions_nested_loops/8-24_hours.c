#include "main.h"
/**
 * jack_bauer - Prints the minutes of a day
 *
 *Return: no return.
 */

void jack_bauer(void)
{

	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 4; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{

					if (a == 2 && b == 3 && c == 5 && d == 9)
						break;

					_putchar (a + 48);
					_putchar (b + 48);
					_putchar (':');
					_putchar (c + 48);
					_putchar (d + '1');
					_putchar ('\n');

				}


			}
		}



	}

}
