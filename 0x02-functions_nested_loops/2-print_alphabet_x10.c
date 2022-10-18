#include "main.h"
/**
 * print_alphabet_x10-print alphabelt x10
 * Return:On success 1
 */
void print_alphabet_x10(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
