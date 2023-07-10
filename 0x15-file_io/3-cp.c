#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * cp_error - is the function that return the error about the file
 * @file_from: is the file to copie
 * @file_to: is the file to put the copie
 * @argv: is the argument content the name of the file
 */

void cp_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - is the function o copie the content from file to onther one
 * @argc: is the number of argument
 * @argv: is the argument
 * Return: return th value 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	int r = 0, w = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	cp_error(file_from, 0, argv);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	cp_error(0, file_to, argv);
	r = 1024;
	while (r == 1024)
	{
		r = read(file_from, buffer, 1024);
		if (r == -1)
			cp_error(r, 0, argv);
		w = write(file_to, buffer, r);
		if (w == -1)
			cp_error(0, w, argv);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
