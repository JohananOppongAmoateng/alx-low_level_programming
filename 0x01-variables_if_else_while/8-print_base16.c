#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints the phrase "with proper grammar,
 *but the outcome is a piece of art,"
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
int n;
n = 48;
while (n < 58)
{
putchar(n);
n += 1;
}

int num;

num = 97;

while (num <= 102)
{

char c2 = (char)num;
num += 1;
putchar(c2);


}
putchar('\n');
return (0);
}
