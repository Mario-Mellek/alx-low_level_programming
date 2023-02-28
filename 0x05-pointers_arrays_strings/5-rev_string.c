#include "main.h"

/**
 * rev_string - A function that reverses a string.
 * @s: pointer paramater
 */


void rev_string(char *s)
{
	char *r_ptr = s;

	while (*(r_ptr + 1) != '\0')
		r_ptr++;
	while (r_ptr > s)
	{
		char tmp = *r_ptr;
		*r_ptr-- = *s;
		*s++ = tmp;
	}
}
