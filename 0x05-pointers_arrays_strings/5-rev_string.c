#include <stdio.h>
#include "main.h"

/**
* rev_string-dfs
* @s:sdad
*/

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	char b[i];
	int c = 0;

	for (int a = i - 1; a >= 0; a--)
	{
		b[c] = s[a];
		c++;
	}
	s[i] = b
}
