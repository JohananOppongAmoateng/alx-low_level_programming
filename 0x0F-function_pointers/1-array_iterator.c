#include <stddef.h>


/**
 * array_iterator - prints an integer, in hexadecimal
 * @array: the integer to print
 * @size: the integer to print
 * @action: the integer to print
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
