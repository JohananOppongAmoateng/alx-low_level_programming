#include <stdio.h>
#include "main.h"

/**
* _strspn-sa
* @s:ad
* @accept:sada
* Return:adffs
*/

unsigned int _strspn(char *s, char *accept)
	{
	unsigned int count = 0;
	int found;
	int a = 0;
	int i;
	while (s[a] != '\0')
		{
        		found = 0;
        		for (i= 0; accept[i] != '\0'; i++)
			{
        	 		if (s[a] == accept[i])
				{
        	        		found = 1;
               				break;
            			}
        		}
        		if (!found)
			{
            			break;
        		}
        		count++;
        		a++;
    		}
    	return (count);
}
