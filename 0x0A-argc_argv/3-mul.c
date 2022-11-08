#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints the multiplies of two numbers
 * @argc: length of the arguments
 * @argv: arguments passed during execution
 * Return: success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
