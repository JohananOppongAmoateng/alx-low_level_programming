#include <stdio.h>
#include "main.h"

/**
* _memcpy-ad
* @dest:asd
* @src:csdc
* @n:dsf
* Return:dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (&dest);
}
