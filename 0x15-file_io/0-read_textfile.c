#include "main.h"
/**
 * read_textfile -  function that reads a text file and prints
 * it to the POSIX standard output.
 *
 * @letters: letters is the number of letters it should read and print
 * @filename: file being read
 *
 * Return: if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readfile;
	char *buf;
	ssize_t readdenfile;
	ssize_t writeoutput;

	readfile = open(filename, O_RDONLY);
	if (readfile == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	readdenfile = read(readfile, buf, letters);
	writeoutput = write(STDOUT_FILENO, buf, readdenfile);
	free(buf);
	close(readfile);

	return (writeoutput);
}
