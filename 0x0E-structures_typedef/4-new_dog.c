#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *dup;
	int len, i;

	if (!str)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	dup = malloc(len);

	if (!dup)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	return (dup);
}

/**
 * new_dog - A function that creates a new dog struct.
 * @name: name param;
 * @age: age param;
 * @owner: owner param
 * Return: returns a new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *nameCopy, *ownerCopy;

	dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);

	nameCopy = _strdup(name);
	if (!nameCopy)
	{
		free(dog);
		return (NULL);
	}

	ownerCopy = _strdup(owner);
	if (!ownerCopy)
	{
		free(nameCopy);
		free(dog);
		return (NULL);
	}

	dog->name = nameCopy;
	dog->owner = ownerCopy;
	dog->age = age;

	return (dog);
}
