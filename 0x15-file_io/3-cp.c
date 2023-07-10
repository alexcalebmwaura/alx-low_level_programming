#include "main.h"
/**
 * create_buffer - creates a buffer
 *
 * @file: where the chars are being stored
 *
 * Return: Buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Cant write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - closes filedescriptor
 *
 * @file_descriptor: file descriptor to be closed
 */
void close_file(int file_descriptor)
{
	int a = close(file_descriptor);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't clode fd%d\n", file_descriptor);
		exit(100);
	}
}
/**
 * main - program that copies the content of a file to another file
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, to, readen, written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	readen = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || readen == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		written = write(to, buffer, readen);
		if (to == -1 || written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		readen = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (readen > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
