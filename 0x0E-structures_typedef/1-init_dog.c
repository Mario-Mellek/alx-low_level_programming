#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: the struct param
 * @name: name param
 * @age: age param
 * @owner: owner param
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
