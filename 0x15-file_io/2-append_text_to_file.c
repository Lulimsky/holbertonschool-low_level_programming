#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdescr = 0;
	int letras = 0;
	int lel = 0;

	if (!filename)
		return (-1);

	fdescr = open(filename, O_WRONLY | O_APPEND);

	if (fdescr == -1)
		return (-1);

	if (text_content)
	{
		for (letras = 0; text_content[letras]; letras++)
			;

		lel = write(fdescr, text_content, letras);

		if (lel == -1)
			return (-1);
	}

	close(fdescr);

	return (1);
}
