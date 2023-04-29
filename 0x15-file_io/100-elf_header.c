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
	int i;

	fp = fopen(fileName, "r");

	if (fp == NULL)
	{
		perror("failed to open file");
		exit(98);
	}
	fread(&header, sizeof(Elf64_Ehdr), 1, fp);

	printf("Magic:\t   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");
	printf("  Class:\t\t\t\tELF%d\n", header.e_ident[EI_CLASS]);
	printf("  Data:\t\t\t\t%s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" :
			"2's complement, big endian");
	printf("  Version:\t\t\t\t%d (current)\n", header.e_version);
	printf("  OS/ABI:\t\t\tUNIX - System V\n");
	printf("  ABI Version:\t\t\t%d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:\t\t\t\t%s\n", header.e_type == ET_EXEC ?
			"EXEC (Executable file)" :
			"Not an executable file");
	printf("  Entry point address:\t\t0x%lx\n", header.e_entry);

	fclose(fp);
}
