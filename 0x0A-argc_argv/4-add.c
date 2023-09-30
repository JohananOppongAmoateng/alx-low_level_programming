#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main- main
* @argc:dasd
* @argv:sda
* Return:(0);
*/

int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	for (i = 0; i < argc; i++)
	{
		char *endptr;
		strtol(argv[i], &endptr, 10);

		if (argc == 1)
		{
			printf("0");
		}
		else if (*endptr != '\0' && *endptr != '\n')
		{
			printf("Error\n");
			return (1);
		}
		result = result + atoi(argv[i]);
	}
	return (result);
}
