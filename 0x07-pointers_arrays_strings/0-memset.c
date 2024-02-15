#include "main.h"
/**
 * _memset - This function fills
 * the first n bytes of the memory area
 * pointed to b s with the constant byte b
 * @s: target
 * @b: constant byte
 * @n: number of byte
 * Return : returns new value of target 
 */

char *_memset(char *s, char b, unsigned int n)

{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
