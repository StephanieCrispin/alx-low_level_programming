#include "main.h"
/**
 * read_textfile - Reads a text file from input filename
 * @filename: FIrst param
 * @letters: Second param
 * Return: the size of the buffer
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t file_descrip, size, output;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	file_descrip = open(filename, O_RDONLY);

	size = read(file_descrip, buff, letters);

	output = write(STDOUT_FILENO, buff, size);

	if (file_descrip == -1 || size == -1 || output == -1 || output != size)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(file_descrip);

	return (output);
}
