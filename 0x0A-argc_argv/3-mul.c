#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main-main
* @argc:dsds
* @argv:asda
* Return:(0);
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		printf("Error");
		return (-1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	return (i);
}

