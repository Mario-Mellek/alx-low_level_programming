#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

void elfReader(char *fileName);

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: %s <filename>\n", argv[0]);
		return (98);
	}
	elfReader(argv[1]);

	return (0);
}

/**
 * elfReader - reads the header of an ELF file
 * @fileName: the name of the file to read
 */


void elfReader(char *fileName)
{
	FILE *fp;
	Elf64_Ehdr header;

	fp = fopen(fileName, "r");

	if (fp == NULL)
	{
		perror("failed to open file");
		exit(98);
	}
	fread(&header, sizeof(Elf64_Ehdr), 1, fp);
	printf("Magic: %s\n", header.e_ident);
	printf("Class: %d\n", header.e_ident[EI_CLASS]);
	printf("Data: %d\n", header.e_ident[EI_DATA]);
	printf("Version: %d\n", header.e_version);
	printf("OS/ABI: %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header.e_type);
	printf("Entry point address: %lx\n", header.e_entry);

	fclose(fp);
}
