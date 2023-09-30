#include <stdio.h>
#include "main.h"

/**
* main-main
* @argc:asd
* @argv:sd
* Return:s
*/

int main(int argc, char *argv[])
{
	while (argv[0] == 0)
	{
		return (-1);
	}
	printf("%d\n", argc);
	return (0);
}
