#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - This initializes a variable of type struct dog
 * @d: A variable that points to the required struct dog
 * @name: The name to init
 * @age: The age to init
 * @owner: The required owner to init
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
