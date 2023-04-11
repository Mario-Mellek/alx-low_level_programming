#include "main.h"
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 * Return: 0 on success, otherwise an error code
 */

int main(int argc, char **argv)
{
	int fd_src, fd_dest;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copy_file(fd_src, fd_dest, argv);
	if (close(fd_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", fd_src);
		exit(100);
	}
	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", fd_dest);
		exit(100);
	}
	return (0);
}

/**
 * copy_file - copies the contents of one file to another
 * @fd_src: file descriptor of the source file
 * @fd_dest: file descriptor of the destination file
 * @argv: array of pointers to the arguments
 * Return: void
 */

void copy_file(int fd_src, int fd_dest, char **argv)
{
	ssize_t n_read;
	char buf[BUF_SIZE];

	while ((n_read = read(fd_src, buf, BUF_SIZE)) > 0)
	{
		if (write(fd_dest, buf, n_read) != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}
