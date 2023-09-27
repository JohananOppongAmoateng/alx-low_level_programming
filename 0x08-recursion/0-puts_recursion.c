#include "main.h"

/**
* _puts_recursion-asda
* @s: nsdfn
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i]  != '\0')
	{
 		_putchar("%c",s[i]);
		i++;
	 	_puts_recursion(s[i]);
	}
}
