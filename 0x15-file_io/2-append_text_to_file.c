#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends a text to file
 * @filename: is the name of the file
 * @text_content: is the text to append on the file
 * Return: return 1 if success or -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	while (text_content != NULL && text_content[i] != '\0')
		i++;
	write(file, text_content, i);
	close(file);

	return (1);
}
