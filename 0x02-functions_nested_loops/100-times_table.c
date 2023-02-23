#include "main.h"

void print_times_table(int n)
{
	int iRow, iColumn, iTableValue;
	
	if (n >= 0 && n < 15)
	{
		for (iRow = 0; iRow <= n; iRow++)
		{
			for (iColumn = 0; iColumn <= n; iColumn++)
			{
				iTableValue = iRow * iColumn;

				if (iTableValue > 99 && iTableValue < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(iTableValue / 100 + '0');
					_putchar((iTableValue / 10) % 10 + '0');
					_putchar(iTableValue % 10 + '0');
				}
				else if (iTableValue >= 10 && iTableValue < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((iTableValue / 10) % 10 + '0');
					_putchar(iTableValue % 10 + '0');
				}
				else if (iTableValue < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(iTableValue % 10 + '0');
				}
				else if (iColumn == 0)
				{
					_putchar('0');
				}

			}
			_putchar('\n');
		}
	}
}
