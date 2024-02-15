#include "dog.h"
/**
 * init_dog- will initiate a variable of type struct dog
 * @d - indentification'
 * @name - dog's title
 * @age - revs around sun
 * @owner - name of human parents
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d!=NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
