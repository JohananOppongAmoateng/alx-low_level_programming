#include <stdio.h>


/**
 * main - prints the phrase "with proper grammar,
 *but the outcome is a piece of art,"
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
int num;
int cap;
num = 97;
cap = 65;
while (num <= 122)
{

char c2 = (char)num;
num += 1;
putchar(c2);


}
while (cap <= 90)
{

char c3 = (char)cap;
cap += 1;
putchar(c3);


}
putchar('\n');
return (0);
}
