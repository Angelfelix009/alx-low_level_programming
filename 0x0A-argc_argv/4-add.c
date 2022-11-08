#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 * @argc: length of the arguments
 * @argv: arguments passed
 * Return: suceess
 */
int main(int argc, char *argv[])
{
	int j, add = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (j = 1; j < argc; j++)
		{
			if (!isdigit(argv[j]))
			{
				printf("Error\n");
				return (1);
			}
			add += atoi(argv[j]);
		}
		printf("%d\n", add);
	}
	return (0);
}
