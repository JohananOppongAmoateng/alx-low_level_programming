#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*string_nconcat-sda
* @s1:ada
* @s2:ASda
* @n:sad
* Return:sda
*/

char *string_nconcat(char *s1,char *s2,unsigned int n)
{
	int s2_len = strlen(s2);
	int s1_len = strlen(s1);
	int i = 0;
	int b = 0;

	char *a = malloc(s2_len + s1_len + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		a[i] = s[i];
		i++;
	}

	if (n >= s2_len)
	{
		while (s2[b] != '\0')
		{
			a[i] = s2[b];
			i++;
			b++;
		}
	}

	else
	{
		while (b < n)
		{
			a[i] = s2[b];
			i++;
			b++;
		}
	}
	return (s);

}
