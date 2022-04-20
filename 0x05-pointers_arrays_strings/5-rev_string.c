#include "main.h"


void rev_string(char *s)
{

while (s[i] != '\0')
{
i++;
}

leng = i - 1;

for (j = 0 ; leng >= j ; leng--)
{
_putchar(s[leng]);
}
_putchar('\n');
}
}