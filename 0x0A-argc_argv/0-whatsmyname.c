#include <stdio.h>
/**
 * main-returns the name of a program
 * @argc: length of array
 * @argv: members of the array
 * Return: success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
