#include <stdio.h>
/**
 * main - Prints the add of the Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int c;
	long int n2 = 2, n1 = 1, fn;

	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 48; c++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}

