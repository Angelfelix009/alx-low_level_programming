#include "main.h"

/**
 * _isdigit - check if number is between 0 - 9
 * @c: input to check with
 * Return: 1 if it is a number (0 to 9), otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

