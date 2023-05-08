#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - function that read a file
 * @filename: is the name of the file to read
 * @letters: is the number of letters should read it
 * Return: return the number of letters readed or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, wrt, rwd;
	char *text;

	if (filename == NULL)
		return (0);
	text = malloc(sizeof(char) * letters);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	rwd = read(file, text, letters);
	wrt = write(STDOUT_FILENO, text, rwd);

	free(text);
	close(file);
	return (wrt);
}
