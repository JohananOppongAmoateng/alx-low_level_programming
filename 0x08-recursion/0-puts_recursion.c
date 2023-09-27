#include "main.h"

/**
* _puts_recursion-asda
* @s: nsdfn
*/

void _puts_recursion(char *s)
{

	if (*s  == '\0')
	{
		return ('\0');
	}
 	_putchar(*s);
 	_puts_recursion(s+1);

}
