#include "main.h"

/**
 * read_textfile - reads and textfile and prints it to the stdout
 * @filename: pointer to a file
 * @letters: the number of letters read and printed out
 * Return: the number of letters read and printed out
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_descriptor;
	ssize_t r_bytes, w_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	f_descriptor = open(filename, O_RDONLY);
	if (f_descriptor == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(f_descriptor);
		return (0);
	}

	r_bytes = read(f_descriptor, buffer, letters);
	if (r_bytes == -1)
	{
		close(f_descriptor);
		free(buffer);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, buffer, r_bytes);

	close(f_descriptor);
	free(buffer);

	if (w_bytes != r_bytes)
		return (0);

	return (r_bytes);
}
