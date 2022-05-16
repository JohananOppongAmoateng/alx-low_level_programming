#include "variadic_functions.h"


/**
 * print_numbers - prints an integer, in hexadecimal
 * @n: the integer to print
 * @separator: the integer to print
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d", va_arg(numbers, int));
			}
			else
			{
				printf("%d%s", va_arg(numbers, int), separator);
			}
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d", va_arg(numbers, int));
			}
			else
			{
				printf("%d", va_arg(numbers, int));
			}
		}
	}
	printf("\n");
}
