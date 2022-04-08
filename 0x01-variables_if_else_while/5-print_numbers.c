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
int num;
num = 0;
while (num < 10)
{
printf("%d", num);
num += 1;
}
printf("\n");
}
