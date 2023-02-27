#include "main.h"

/**
 * swap_int - A function that swaps the
 * values of two integers.
 * @a: pointer paramaters for swapping
 * @b:pointer paramaters for swapping
 */
void swap_int(int *a, int *b)
{
	int placeHolder;

	placeHolder = *a;
	*a = *b;
	*b = placeHolder;
}
