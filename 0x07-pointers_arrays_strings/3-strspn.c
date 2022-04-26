#include "main.h"
#include <stdio.h>


unsigned int _strspn(char *s, char *accept)
{
	int i,j,k,man;
	k = 0;
	for (i = 0; s[i] != '\0' ; i++)
	{
		man = 0;
		for (j = 0; accept[j] != '\0';j++)
		{
			if (accept[j] == s[i])
			{
				man = 1;
				k++;
			}

		}
		if (man == 0)
		{
			return (k);
		}
	}
	return (0);
}