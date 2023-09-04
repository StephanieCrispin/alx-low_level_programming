#include "main.h"

int create_file(const char *filename, char *text_content)
{
    int file_descrip, written;
    int len = 0;

    if (filename == NULL)
        return (-1);

    if (text_content)
    {
        while (text_content[len])
            len++;
    }

    file_descrip = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

    written = write(file_descrip, text_content, len);

    if (file_descrip == -1 || written == -1)
        return (-1);

    close(file_descrip);

    return (1);
}
