#include <stdio.h>


/**
 * main - prints the phrase "with proper grammar,
 *but the outcome is a piece of art,"
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
int num;
num = 97;
while (num <= 122)
{

char c2 = (char)num;
num += 1;

if (c2 != 'e' && c2 != 'q')
{
putchar(c2);
}

}
putchar('\n');
return (0);
}
