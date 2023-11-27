#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to
 * the POSIX standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 * If the file cannot be opened or read, return 0.
 * If filename is NULL, return 0.
 * If write fails or does not write the expected amount of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes_read = read(fd, &buf[0], letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, &buf[0], bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (bytes_read);
}
