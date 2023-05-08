#include "main.h"
/**
 * append_text_to_file -  function that appends text at the end of a file.
 *
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int appendfile, appendedfile;
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
	appendfile = open(filename, O_WRONLY | O_APPEND);
	appendedfile = write(appendfile, text_content, length);
	if (appendfile == -1 || appendedfile == -1)
	{
		return (-1);
	}
	close(appendfile);
	return (1);
}
