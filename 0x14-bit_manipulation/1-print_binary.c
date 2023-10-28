#include main.h

/**
*print_binary - prints the binary representation of a number
*@n: number to be printed
*
*Return: void
*/

void print_binary(unsigned long int n)
{
if (n > 1)
0-binary_to_uint.c print_binary(n >> 1);

_putchar((n & 1) + '0');
}
