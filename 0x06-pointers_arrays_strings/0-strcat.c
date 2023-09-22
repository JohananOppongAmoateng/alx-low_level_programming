#include <stdio.h>
#include "main.h"

/**
* _strcat-function
* @dest: asdas
* @src: dasad
* Return: char *
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int b = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[i] !=  '\0')
	{
		i++;
		b++;
		dest[i] = src[b];
	}
	dest[i++] = '\0';

	return (*dest);
}
