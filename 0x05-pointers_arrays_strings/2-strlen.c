#include <stdio.h>
#include "main.h"

/**
* _strlen- mams
* @s:s
* Return: 0
*/

int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
