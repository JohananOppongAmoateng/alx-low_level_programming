#include "main.h"


/**
 * puts_half - returns the length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
 */


void puts_half(char *str)
{

int i = 0;
int even;
int odd;


while (str[i] != '\0')
{
i++;
}
if (i % 2 == 1)
{
odd = i - 1;

for (odd = odd / 2 ; odd <= i ; odd++)
{
_putchar(str[odd - 1]);
}
_putchar('\n');
}
else
{
for (even = i / 2 ; even < i ; even++)
{
_putchar(str[even]);
}
_putchar('\n');
}
}
