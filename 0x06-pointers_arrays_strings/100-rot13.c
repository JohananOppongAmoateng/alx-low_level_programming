#include "main.h"

/**
* rot13 -  encodes a string using rot13
* @str:the string targeted
*Return: returns the encoded string
*/

char *rot13(char *str)
{
int i = 0;
while (str[i])
{
if (str[i] >= 'A' && str[i] <= 'Z') 
{
str[i] = 'A' + (str[i] - 'A' + 13) % 26;
}
else if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = 'a' + (str[i] - 'a' + 13) % 26;
}
i++;
}
return str;
}
