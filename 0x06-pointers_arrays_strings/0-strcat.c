#include "main.h"


/**
 * _strcat - Short description, single line
 * @dest: Description of parameter x
(* @src:a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;

j = 0;
i = 0;
while (src[i] != 0)
{
i++;
}

while (dest[j] != 0)
{
src[i] = dest[j];
i++;
j++;
}
return (*dest);
}
