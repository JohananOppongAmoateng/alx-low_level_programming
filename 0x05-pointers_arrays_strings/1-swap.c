#include <stdio.h>
#include "main.h"

/**
* swap_int-main
* @a:ss
* @b:adda
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
