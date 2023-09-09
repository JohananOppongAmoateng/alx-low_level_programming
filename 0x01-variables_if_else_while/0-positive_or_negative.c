#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main-main
*
* Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is greater than zero", n);
	}
	else if (n < 0)
	{
		printf("%d is less than zero", n);
	else {
		printf("%d is zero", n);
	}
	return (0);
}
