
#include "main.h"


void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
int leng = i-1;
for (int j= 0; leng>=j;i--)
{
_putchar(s[j]);
}
}

