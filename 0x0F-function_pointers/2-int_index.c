/**
 * int_index - check if the absolute value of a number is 98
 *@array: the integer to check
 *@size: the integer to check4
 *@cmp: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	j = 0;
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	if (j > 0)
	{
		return (0);
	}
	return (-1);
}
