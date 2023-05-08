#include "main.h"
/**
 * create_file - function that creates a file.
 *
 * @filename:  is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int createfile, createdfile;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	createfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	createdfile = write(createfile, text_content, length);
	if (createfile == -1 || createdfile == -1)
	{
		return (-1);
	}
	close(createfile);
	return (1);
}
