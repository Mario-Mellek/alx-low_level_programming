#include "main.h"

/**
 * create_file - A a function that creates a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: return 1 on success, or -1 on failures
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int fd, i;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "w");

	if (fp == NULL)
		return (-1);

	fd = fileno(fp);

	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
		return (-1);

	if (text_content == NULL)
	{
		fclose(fp);
		return (1);
	}
	else
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write(fd, text_content, i);
		fclose(fp);
		return (1);
	}
	return (-1);
}
