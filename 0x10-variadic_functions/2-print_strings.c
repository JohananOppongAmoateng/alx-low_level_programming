#include "variadic_functions.h"

/**
 * print_strings - prints an integer, in hexadecimal
 * @n: the integer to print
 * @separator: the integer to print
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;

	va_start(strings, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%s", va_arg(strings, char *));
			}
			else
			{
				printf("%s%s", va_arg(strings, char *), separator);
			}
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%s", va_arg(strings, char *));
			}
			else
			{
				printf("%s", va_arg(strings, char *));
			}
		}
	}
	printf("\n");
}
