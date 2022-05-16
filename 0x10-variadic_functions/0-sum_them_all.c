#include "variadic_functions.h"


/**
 * sum_them_all - prints an integer, in hexadecimal
 * @n: the integer to print
 *
 * Return: Nothing.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, unsigned int);
	}
	return (sum);
}
