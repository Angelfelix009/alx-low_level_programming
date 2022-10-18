#include "main.h"
/**
 * jack_bauer-prints all minutes in a day from 00:00
 * Return:0 if successful
 */
void jack_bauer(void)
{
	int i, j, k, m;

	for (j = 0; j <= 2; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (m = 0; m <= 9; m++)
				{
					if (j == 2 && i > 3)
					{
						break;
					}
					_putchar(j + '0');
					_putchar(i + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
			}
		}
	}
}
