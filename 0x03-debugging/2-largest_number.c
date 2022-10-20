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
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	return (largest);
}
