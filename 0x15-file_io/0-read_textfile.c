#include "main.h"

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
