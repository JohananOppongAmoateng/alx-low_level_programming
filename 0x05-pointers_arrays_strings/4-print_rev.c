
#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
int leng;
leng = i - 1;
int j;
for (j = 0 ; leng >= j;leng--)
{
_putchar(s[j]);
}
_putchar("\n");
}
