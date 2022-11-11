#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocated memory
 * @b: amount of bytes
 * Return: d
 */
void *malloc_checked(unsigned int b)
{
	char *d;

	d = malloc(b);
	if (d == NULL)
		exit(98);
	return (d);
}
