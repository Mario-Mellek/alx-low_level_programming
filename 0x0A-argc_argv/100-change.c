#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that prints the minimum
 * number of coins to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 if successfull otherwise 1
 */


int main(int argc, char **argv)
{
	int input, result, v1, v2, v3, v4, v5;

	if ((argc != 2) || (isdigit(*argv[1]) == 0))
	{
		puts("Error");
		return (1);
	}
	input = atoi(argv[1]);
	result = 0;
	v1 = 0;
	v2 = 0;
	v3 = 0;
	v4 = 0;
	v5 = 0;
	while (input > 0)
	{
		if (input >= 25)
		{
			v1 += 1;
			input -= 25;
		}
		else if (input >= 10)
		{
			v2 += 1;
			input -= 10;
		}
		else if (input >= 5)
		{
			v3 += 1;
			input -= 5;
		}
		else if (input >= 2)
		{
			v4 += 1;
			input -= 2;
		}
		else
		{
			v5 += 1;
			input -= 1;
		}
	}
	result = v1 + v2 + v3 + v4 + v5;
	printf("%d\n", result);
	return (0);
}
