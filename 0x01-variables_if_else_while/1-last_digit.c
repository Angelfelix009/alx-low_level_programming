#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- program entry point
 *
 * Return:0 if  no error, non-zero value if error.
 */
int main(void)
{
	int n;
	int i;

	srand(tim(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,i);
	}
	else if (i == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, i);
	}
	else if (i < 6 && i != 0)
	{
		prinf("Last digit of %d is %d and is less than 6 and not 0\n", n,i);
	}
	return (0);
}
