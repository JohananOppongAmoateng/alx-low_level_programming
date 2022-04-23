#include "main.h"

/**
 * _strncpy - Short description, single line
 * @dest: Description of parameter x
 * @src:a blank line
 * @n:a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

char *_strncpy(char *dest, char *src, int n)
{
int i,j;
i = 0;
j = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0'
return (dest);
}
