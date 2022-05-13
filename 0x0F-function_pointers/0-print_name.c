
/**
 * print_name- print a name in uppercase
 * @name: name of the person
 * @f:name of the person
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
	return (0);
}
