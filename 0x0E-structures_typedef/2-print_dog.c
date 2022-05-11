#include "dog.h"
#include <stdio.h>

/**
 * print_dog - check the code
 *@d:d/
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	printf("Name: %s", d->name);
	printf("\n");
	printf("Age: %f", d->age);
	printf("\n");
	printf("Owner: %s", d->owner);
}
