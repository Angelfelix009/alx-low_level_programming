#include <stdio.h>
/**
 * main-is the entry point for the program
 *
 * Return:zero if no error, Non-zero value if errors.
 */
int main(void)
{
	printf("size of a char :%idbytes(s)\n", sizeof(char));
	printf("size of a int:%idbytes(s)\n", sizeof(int));
	printf("size of a long int:%idbytes(s)\n", sizeof(long int));
	printf("size of a long long int:%idbytes(s)\n", sizeof(long long int));
	printf("size of a float:%idbytes(s)\n", sizeof(float));
	return (0);
}
