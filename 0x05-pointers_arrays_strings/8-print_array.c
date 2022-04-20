#include "main.h"

/**
 * print_array - prints half of a string
 * followed by a new line
 * @a: string to be printed
 * @n: string to be printed
 */
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
if (a[i] == n - 1)
{
printf("%d ",a[i]);
}
else
{
printf("%d, ",a[i]);
}
}
}