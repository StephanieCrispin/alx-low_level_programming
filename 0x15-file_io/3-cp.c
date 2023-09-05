#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_buffer(char *file);
void close_file_func(int fd);

char *make_buffer(char *file)
{
    char *buff;

    buff = malloc(sizeof(char) * 1024);

    if (!buff)
    {
        dprintf(STDERR_FILENO,
                "Error: Can't write to %s\n", file);
        exit(99);
    }

    return (buff);
}

void close_file_func(int fd)
{
    int c;

    c = close(fd);

    if (c == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

int main(int argc, char *argv[])
{
    int f, to, r, w;
    char *buffer;

    if (argc > 3 || argc < 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    buffer = make_buffer(argv[2]);
    f = open(argv[1], O_RDONLY);
    r = read(f, buffer, 1024);
    to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

    do
    {
        if (f == -1 || r == -1)
        {
            dprintf(STDERR_FILENO,
                    "Error: Can't read from file %s\n", argv[1]);
            free(buffer);
            exit(98);
        }

        w = write(to, buffer, r);
        if (to == -1 || w == -1)
        {
            dprintf(STDERR_FILENO,
                    "Error: Can't write to %s\n", argv[2]);
            free(buffer);
            exit(99);
        }

        r = read(f, buffer, 1024);
        to = open(argv[2], O_WRONLY | O_APPEND);

    } while (r > 0);

    free(buffer);
    close_file_func(f);
    close_file_func(to);

    return (0);
}