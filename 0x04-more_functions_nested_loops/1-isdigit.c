#include "main.h"

/**
 * _isdigit - function to check for a digit
 * @c: input to check with
 * Return: 1 if c is digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c <= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

