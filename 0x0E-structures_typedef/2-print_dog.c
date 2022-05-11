#include "dog.h"
#include <stdio.h>

/**
 * print_dog - check the code
 *@d:d/
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{	
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s", d->name);
	}
	
	printf("\n");

	printf("Age: %f", d->age);
	printf("\n");
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s", d->owner);
	}
	
}
