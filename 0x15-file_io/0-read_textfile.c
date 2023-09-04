#include "main.h"
/*
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}

/*ssize_t file_descrip, size, output;
char *buff;

if (filename == NULL)
	return (0);

buff = malloc(sizeof(char) * letters);
if (buff == NULL)
	return (0);

file_descrip = open(filename, O_RDONLY);

size = read(file_descrip, buff, letters);

output = write(STDIN_FILENO, buff, size);

if (file_descrip == -1 || size == -1 || output == -1 || output != size)
{
	free(buff);
	return (0);
}

free(buff);
close(file_descrip);

return (output);*/