#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints its name,
 * followed by a new line.
 * @argc: argument count
 * @argv: vector of strings
 * Return: returns 0 if successful
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", *argv);
	exit(EXIT_SUCCESS);
}
