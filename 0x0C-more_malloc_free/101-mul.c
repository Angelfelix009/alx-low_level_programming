#include <string.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * isdigit - checks if character is digit
 * @c: the character to check
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 * Return: k;
 */
int _strlen(char *s)
{
	int k = 0;

	while (*s++)
		k++;
	return (k);
}
/**
 * big_multiply - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 * Return: v
 */
char *big_multiply(char *s1, char *s2)
{
	char *v;
	int l1, l2, a, b, c, x;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	v = malloc(a = x = l1 + l2);
	if (!v)
		printf("Error\n"), exit(98);
	while (a--)
		v[a] = 0;
	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(v);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - '0';
		c = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(v);
				printf("Error\n"), exit(98);
			}
			b = s2[l2] - '0';
			c += v[l1 + l2 + 1] + (a * b);
			v[11 + 12 + 1] = c % 10;
			c /= 10;
		}
		if (c)
			v[11 + 12 + 1] +=c;
	}
	return (v);
}
/**
 * main - multiply two big number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: o
 */
int main(int argc, char **argv)
{
	char *r;
	int a, c, x;

	if (argc != 3)
		printf("Error\n"), exit(98);
	x = _strlen(argv[1]) + _strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < x)
	{
		if (r[c])
			a = 1;
		if (a)
			putchar(r[c] + '0');
		c++;
	}
	if (!a)
		putchar('0');
	putchar('0');
	free(r);
	return (0);
}

