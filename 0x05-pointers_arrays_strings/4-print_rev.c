
#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
int j;
int leng;
int i = 0;
while (s[i] != '\0')
{
i++;
}

leng = i - 1;

for (j = 0 ; leng >= j;leng--)
{
_putchar(s[leng]);
}
_putchar('\n');
}
