#include "main.h"

/**
 * _puts_recursion - check the code
 * @s:-lsjnlfnlnlsdlnlld
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (s[0] > 'z')
	{
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s++);
	// return (0);
}
