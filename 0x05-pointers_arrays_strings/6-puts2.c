#include <stdio.h>
#include "main.h"

/**
* puts2-Sas
* @str:asas
*/

void puts2(char *str)
{
	for (int i = 0; str[i] == '\0'; i += 2)
	{
		_putchar(str[i]);
	}
}
