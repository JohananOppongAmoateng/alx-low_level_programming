#include <stdio.h>
#include "dog.h"

/**
* print_dog - dfgchbj
* @d:sadsa
*/

void print_dog(struct dog *d) 
{
	if (d == NULL)
	{
		return; // Exit early if d is NULL
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Breed: %s\n", (d->breed != NULL) ? d->breed : "(nil)");
	printf("Age: %d\n", d->age);
}
