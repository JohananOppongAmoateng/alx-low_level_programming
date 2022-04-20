#include "main.h"


/**
 * _puts_half - returns the length of a string
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
odd = (i - 1) / 2;

for (odd ;odd <= i ; odd++)
{
_putchar(str[odd]);
}

}
else
{
for (even = i / 2 ; even <= i ; even++)
{
_putchar(str[even]);
}
_putchar('\n');
}
/**
 * _putchar('\n');
 *return (0);
 */
}
