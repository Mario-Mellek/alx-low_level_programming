#include "main.h"

/**
 * read_textfile - function that reads a text
 * file and prints it to the POSIX standard output.
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char c;
	ssize_t n = 0;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	while (letters > 0 && (c = fgetc(fp)) != EOF)
	{
		if (write(STDOUT_FILENO, &c, 1) == -1)
		{
			fclose(fp);
			return (0);
		}
		letters--;
		n++;
	}
	fclose(fp);

	return (n);
}
