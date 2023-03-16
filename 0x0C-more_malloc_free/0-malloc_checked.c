#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates
 * memory using malloc.
 * @b: size to allocate
 * Return: returns a void pointer to the memory
 * allocated if successfull, otherwise exits with code 98;
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
