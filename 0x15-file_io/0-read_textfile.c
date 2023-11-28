#include "main.h"

/**
 * read_textfile - Funtion that reads
 * a text file and prints its letters.
 * @filename: parameter
 * @letters: no of letters to be printed
 * Return: Number of letters printed OR
 * O if it fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nrd = read(fd, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(fd);

	free(buff);

	return (nwr);
}
