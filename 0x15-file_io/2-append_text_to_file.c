#include "main.h"

/**
 * append_text_to_file - Appends text from the text_content
 *  param to a file
 * @filename: First param
 * @text_content: Second param
 * Return: Returns an int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int re, wri, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	re = open(filename, O_WRONLY | O_APPEND);
	wri = write(re, text_content, len);

	if (re == -1 || wri == -1)
		return (-1);

	close(re);
	return (1);
}
