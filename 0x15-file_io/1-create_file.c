#include "main.h"
/**
 *create_file - function creates a file.
 *@filename: file name.
 *@text_content: NULL created file.
 *Return: 1 on success otherwise -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fdescr = 0;
	int leescribe = 0;
	int lenght = 0;

	if (filename == NULL)
		return (-1);

	fdescr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fdescr == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght] != '\0'; lenght++)
			continue;

		leescribe = write(fdescr, text_content, lenght);
		if (leescribe == -1)
		{
			return (-1);
		}
	}

	close(fdescr);

	return (1);
}
