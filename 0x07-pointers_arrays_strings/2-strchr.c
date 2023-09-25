#include  <stdio.h>
#include "main.h"

/**
* _strchr-sad
* @s:afd
* @c:ad
* Return: char *c
*/

char *_strchr(char *s, char c)
{
	for (int i=0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
