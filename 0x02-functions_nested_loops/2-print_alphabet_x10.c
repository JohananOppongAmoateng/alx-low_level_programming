#include "main.h"
/**
 *print_alphabet_x10-Prints the alphabet 10 times in lowercase,with new line
 */
void print_alphabet_x10(void)
{
char ch;
int count;

for (count = 0 ; count < 10 ; count++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
