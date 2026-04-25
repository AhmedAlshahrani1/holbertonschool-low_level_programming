#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_err - checks if files can be opened
 * @file_from: file descriptor of the source file
 * @file_to: file descriptor of the destination file
 * @argv: arguments vector
 *
 * Return: void
 */
void check_err(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * close_file - closes file descriptors
 * @fd: the file descriptor to be closed
 *
 * Return: void
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	check_err(fd_from, fd_to, argv);

	r = 1024;
	while (r == 1024)
	{
		r = read(fd_from, buf, 1024);
		if (r == -1)
			check_err(-1, 0, argv);

		w = write(fd_to, buf, r);
		if (w == -1 || w != r)
			check_err(0, -1, argv);
	}

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
