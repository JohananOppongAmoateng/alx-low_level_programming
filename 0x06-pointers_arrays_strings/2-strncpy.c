#include <stdio.h>
#include "main.h"

/**
* _strncpy-aSAA
* @dest:sad
* @src:SAdas
* @n:sada
* Return:0
*/

char *_strncpy(char *dest, char *src, int n)
{
	for (int i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
