#include "main.h"
#include <fcntl.h>

#define BUF_SIZE 1024

int main(int argc, char **argv)
{
	int fd_src, fd_dest;
	ssize_t n_read;
	char buf[BUF_SIZE];

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
	if (close(fd_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", fd_src);
		exit (100);
	}
	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", fd_dest);
		exit (100);
	}
	return (0);
}
