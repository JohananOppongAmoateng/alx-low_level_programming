#include <stdio.h>
#include "main.h"

/**
* print_rev-adas
* @s:asdsad
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] == '\0')
	{
		i++;
	}

	while (s[i] >= 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar("\n");
}