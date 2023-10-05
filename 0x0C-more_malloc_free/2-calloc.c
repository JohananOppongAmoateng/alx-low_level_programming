#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of elements.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(nmemb * size);
	char *byte_ptr = (char *)ptr;
	unsigned int total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}


	if (ptr == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < total_size; i++)
	{
		byte_ptr[i] = 0;
	}

	return (ptr);
}
