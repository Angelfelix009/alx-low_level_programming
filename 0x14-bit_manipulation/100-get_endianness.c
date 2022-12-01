#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int j;
	char *k;

	j = 1;
	k = (char *) &x;
	return ((int)*k);
}
