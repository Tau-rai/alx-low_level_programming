#include "main.h"

void print_error_exit(const char *message, int exit_code);

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer to an array of characters
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_src, fd_dest;
	char buffer[BUFF_SIZE];
	ssize_t bytes_r, bytes_w;

	if (argc != 3)
	{
		print_error_exit("Usage: cp file_from file_to", 97);
	}

	fd_src = open(file_from, O_RDONLY | O_CLOEXEC);
	if (fd_src == -1)
	{
		/*print_error_exit("Error: Can't read from file", 98);*/
		dprintf(STDERR_FILENO, "Error: Can't read to file %s\n", file_from);
		exit(98);
	}

	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		/*print_error_exit("Error: Can't write to file", 99);*/
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		close(fd_src);
		exit(99);
	}

	while ((bytes_r = read(fd_src, buffer, BUFF_SIZE)) > 0)
	{
		bytes_w = write(fd_dest, buffer, bytes_r);
		if (bytes_w != bytes_r)
		{
			/*print_error_exit("Error: Can't write to file", 99);*/
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			close(fd_src);
			close(fd_dest);
			exit(99);
		}
	}

	if (bytes_r == -1)
	{
		/*print_error_exit("Error: Can't read from file", 98);*/
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_src);
		close(fd_dest);
		exit(98);
	}

	if (close(fd_src) == -1)
	{
		/*rint_error_exit("Error: Can't close fd", 100);*/
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}

	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}

	return (0);
}

/**
 * print_error_exit - prints the error message and exits the program
 * @message: pointer to error message
 * @exit_code: an integer value
 * Return: Nothing.
 */
void print_error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}
