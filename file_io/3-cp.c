#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, other values on failure
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
		print_usage_and_exit(av[0], 97);

	fd_from = open_file(av[1], O_RDONLY, av[1], 98);
	fd_to = open_file(av[2], O_WRONLY | O_CREAT | O_TRUNC, av[2], 99);

	copy_file_content(fd_from, fd_to, av[1], av[2]);

	close_file(fd_from, av[1], 100);
	close_file(fd_to, av[2], 100);

	return (0);
}

/**
 * copy_file_content - Copies the content from one file to another
 * @fd_from: Source file descriptor
 * @fd_to: Destination file descriptor
 * @src_filename: Name of the source file
 * @dest_filename: Name of the destination file
 */
void copy_file_content(int fd_from, int fd_to, const char *src_filename, const char *dest_filename)
{
	char buffer[1024];
	ssize_t read_result, write_result;

	do	{
		read_result = read_from_file(fd_from, buffer, 1024, src_filename);
		write_result = write_to_file(fd_to, buffer, read_result, dest_filename);

	} while (read_result > 0);
}

/**
 * print_usage_and_exit - Prints usage message and exits with a specific code
 * @program_name: Name of the program
 * @exit_code: Exit code
 */
void print_usage_and_exit(const char *program_name, int exit_code)
{
	dprintf(2, "Usage: %s file_from file_to\n", program_name);
	exit(exit_code);
}
