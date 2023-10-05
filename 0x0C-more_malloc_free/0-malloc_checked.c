#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* malloc_checked-das
* @b:sasd
* Return:asdsad
*/

void *malloc_checked(unsigned int b)
{
	void *a = malloc(sizeof(unsigned int) * b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
