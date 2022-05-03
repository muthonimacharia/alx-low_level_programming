#include "holberton.h"
#include <stdio.h>
/**
 * error - Prints message error if happens.
 * @e: Selects the error.
 * @d: FD_VALUE.
 * @str:String to print.
*/
void error(int e, int d,  char *str)
{
	switch (e)
	{
	case 1:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	case 2:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(98);
	case 3:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(99);
	case 4:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another.
 * @argc: number of arguments.
 * @argv: the name of the files.
 * Return: 0 on success and -1 on failure
*/
int main(int argc, char *argv[])
{
	char *buffer[1024];
	int  file_from, file_to, close_file, n, m;

	if (argc != 3)
		error(1, 0, "");
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error(2, 0, argv[1]);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_to == -1)
		error(3, 0, argv[2]);
	do {
		n = read(file_from, buffer, 1024);
		if (n == -1)
			error(2, 0, argv[1]);
		m = write(file_to, buffer, n);
		if (m == -1)
			error(3, 0, argv[2]);
	} while (n == 1024);
	close_file = close(file_from);
	if (close_file == -1)
		error(3, file_from, argv[1]);
	close_file = close(file_to);
	if (close_file == -1)
		error(3, file_from, argv[2]);
	return (0);
}
