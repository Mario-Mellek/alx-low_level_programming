#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog with 3 elementa
 * @name: Dog's name
 * @age: Dog's age
 * @owner: DOg's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
