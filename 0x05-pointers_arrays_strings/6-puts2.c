#include "main.h"


/**
 * puts2 - prints a string in reverse, followed by a new line
 * @str: string to be printed
 */
void puts2(char *str)
{
int i;
int j;

i = 0;
while (str[i] != '\0')
{
i++;
}



for (j = 0 ; j < i ; j++)
{

if (j % 2 == 0)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
