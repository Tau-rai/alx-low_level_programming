#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to a file to be created
 * @text_content: pointer to a null terminated string
 * Return: 1 on success.
 */
int create_file(const char *filename, char *text_content)
{
	int len, f_descriptor;

	if (filename == NULL)
		return (-1);

	f_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		if (write(f_descriptor, text_content, len) != len)
		{
			close(f_descriptor);
			return (-1);
		}
	}
	close(f_descriptor);

	return (1);
}
