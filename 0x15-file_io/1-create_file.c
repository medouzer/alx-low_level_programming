#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - is the function that creat file
 * @filename: is the name of the file that you want to create
 * @text_content: is the text that you want on the file
 * Return: 1 of all thing is good else -1
 */

int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	while (text_content != NULL && text_content[i] != '\0')
		i++;
	write(file, text_content, i);
	close(file);

	return (1);
}
