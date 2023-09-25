#include <stdio.h>
#include "main.h"


/**
* _memset-sdfs
* @s:dsf
* @b:Dasd
* @n: dlfn
* Return: char *s
*/

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (&s);
}
