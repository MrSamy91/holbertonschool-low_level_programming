#include "main.h"

/**
 * create_file - creates a file and writes text to it
 * @filename: the name of the file to be created
 * @text_content: the content to be written to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, const char *text_content)
{
	int fd, write_result;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
			text_length++;

		write_result = write(fd, text_content, text_length);
		if (write_result == -1 || (size_t)write_result != text_length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

