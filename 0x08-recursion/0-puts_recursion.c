#include "main.h"

/**
 * _puts_recursion - check the code
 * @s:-lsjnlfnlnlsdlnlld
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (s > "z")
	{
		return;
	}
	_putchar(s);
	_puts_recursion(s + 1);
	
}
