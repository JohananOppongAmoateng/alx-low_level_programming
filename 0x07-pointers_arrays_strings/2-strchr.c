#include "main.h"
#include <stdio.h>


/**
 * _strchr - prints buffer in hexa
 * @s: the address of memory to print
 * @c: the size of the memory to print
 * Return: s.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
