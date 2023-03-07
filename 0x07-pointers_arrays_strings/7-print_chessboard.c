#include "main.h"

/**
 * print_chessboard - a function that prints
 * the chessboard.
 * @a: input array;
 */

void print_chessboard(char (*a)[8])
{
	int columns, rows;
	int size = 8;

	for (columns = 0; columns < size; columns++)
	{
		for (rows = 0; rows < size; rows++)
		{
			_putchar(a[columns][rows]);
		}
		_putchar('\n');
	}
}
