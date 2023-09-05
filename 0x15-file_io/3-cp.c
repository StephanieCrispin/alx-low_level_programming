#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void error_exit(const char *message, int exit_code)
{
    dprintf(STDERR_FILENO, "Error: %s\n", message);
    exit(exit_code);
}

void copy_file(const char *src_file, const char *dest_file)
{
    int src_fd, dest_fd;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

    src_fd = open(src_file, O_RDONLY);
    if (src_fd == -1)
    {
        error_exit("Can't read from source file", 98);
    }

    dest_fd = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (dest_fd == -1)
    {
        error_exit("Can't write to destination file", 99);
    }

    while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(dest_fd, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
        {
            error_exit("Write error to destination file", 99);
        }
    }

    if (bytes_read == -1)
    {
        error_exit("Read error from source file", 98);
    }

    close(src_fd);
    close(dest_fd);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        return 97;
    }

    copy_file(argv[1], argv[2]);

    return 0;
}
