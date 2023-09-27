#include "main.h"

/**
* _puts_recursion-asda
* @s: nsdfn
*/

void _puts_recursion(char *s)
{

	if (*s  == '\0')
	{
		return;
	}
 	_putchar("%c",*s);
 	_puts_recursion(s+1);

}
