#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a
 * memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: returns a void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
