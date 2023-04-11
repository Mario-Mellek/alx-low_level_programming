#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int i;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "r+");
	if (fp == NULL)
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
		write(fileno(fp), text_content, i);
		fclose(fp);
		return (1);
	}
	return (-1);
}
