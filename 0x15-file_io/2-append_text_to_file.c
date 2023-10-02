#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: is the nul terminated string to add a the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len, f_descriptor;

	if (filename == NULL)
		return (-1);

	f_descriptor = open(filename, O_WRONLY | O_APPEND);
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
