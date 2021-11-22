#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of the file.
 * @letters: the number of letters it should read and print.
 *Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
		ssize_t leer = 0;
		ssize_t escribir = 0;
		char *buffer;
		int fdescr;

	if (filename == NULL)
		return (0);

	fdescr = open(filename, O_RDONLY);
	if (fdescr == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	leer = read(fdescr, buffer, letters);
	if (leer == -1)
	{
		free(buffer);
		close(fdescr);
		return (0);
	}

	escribir = write(STDOUT_FILENO, buffer, leer);
	if (escribir == -1)
	{
		free(buffer);
		close(fdescr);
		return (0);
	}
	close(fdescr);
	return (leer);
}
