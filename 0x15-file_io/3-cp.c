#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - is the function to copie the content from file to onther one
 * @argc: is the number of argument
 * @argv: is the argument
 * Return: return the value 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	size_t letters = 1024;
	int r, w;
	char *buffer = malloc(sizeof(char) * letters);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_form file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	r = read(file_from, buffer, letters);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}
	w = write(file_to, buffer, r);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	free(buffer);
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
