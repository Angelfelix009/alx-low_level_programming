#include "main.h"

/**
 * Largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: thirs integer
 * Return: Largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
