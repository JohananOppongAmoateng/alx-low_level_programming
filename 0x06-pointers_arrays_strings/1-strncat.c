#include <stdio.h>
#include "main.h"

/**
*  _strncat-sja
* @src:asd
* @dest:sS
* @n:sda
* Return:0
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (int a = 0; a <=  n; a++)
	{
		if (src[a]  != '\0')
		{
			i++;
		}
		dest[i] = src[a];
	}
	return (*dest);
}
