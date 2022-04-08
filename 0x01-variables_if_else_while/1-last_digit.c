#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */


/**
 * main - prints the phrase "with proper grammar,
 *but the outcome is a piece of art,"
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;
	int rs;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	rs = n % 10;
	if (rs > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, rs);
	}
	else if (rs == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, rs);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rs);
	}
	return (0);
}
