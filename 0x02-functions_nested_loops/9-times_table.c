#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int num, multiplier, product;

for (multiplier = 0; multiplier <= 9; multiplier++)
{
for (num = 0; num <= 9; num++)
{
product = 9 * num;
if (num == 0)
{
_putchar(product + '0');
}
else if (product <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
}
_putchar('\n');
}
}

